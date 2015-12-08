// Load in gulp
var gulp = require('gulp');

// Load in config JSON
var config = require('./build.config.json');

// Load all plugins into the p variable
var p = require('gulp-load-plugins')();

// Load BrowserSync and simplify reload
var browserSync = require('browser-sync');
var reload = browserSync.reload;

// Load delete module to clean public assets directory
var del = require('del');

// Load linters
var scsslint = require('gulp-scss-lint');

// Load runSequence to run multiple tasks in a series (synchronously)
// Gulp 4 will have this native, we need to use an external module for now
var runSequence = require('run-sequence');

/**
 * Gulp task: clean
 * Removes asset files before running other tasks
 */
gulp.task('clean', function(){
  del([config.assets.dest])
});

/**
 * Gulp task: styles
 * Compiles our Sass .scss files into CSS, and handles creation of CSS
 * sourcemaps for better dev tools debugging
 *
 * Note: gulp.dest() is used to drop copies of the generated files in both the
 * source/ and public/ directories -- otherwise the changes would be lost when
 * the Pattern Lab generator is run the next time...
 */
gulp.task('styles', function(){
  gulp.src(config.styles.files)
    .pipe(p.plumber())
    .pipe(p.sourcemaps.init())
    .pipe(p.sass({
      includePaths: [
        require('node-normalize-scss').includePaths,
        require('bourbon').includePaths,
        './node_modules/susy/sass',
        './node_modules/breakpoint-sass/stylesheets'
      ]
    }))
    .pipe(p.autoprefixer({
      browsers: ['last 2 versions']
    }))
    .pipe(p.cssmin())
    .pipe(p.rename({suffix: '.min'}))
    .pipe(p.sourcemaps.write('.'))
    .pipe(gulp.dest(config.styles.dest))
    .pipe(reload({stream:true}));
});

/**
 * Gulp task: lint:scss
 * SCSS Linter
 */
gulp.task('lint:scss', function() {
  return gulp.src(config.styles.files)
    .pipe(scsslint({
      config: 'scss-lint.yml'
      // endless: true
    }));
});

/**
 * Gulp task: scripts
 * Concatenates our set of JS files into one scripts.js file, uglifies
 * (compresses) that file, and generates appropriate sourcemaps for better
 * debugging.
 *
 * Note: gulp.dest() is used to drop copies of the generated files in both the
 * source/ and public/ directories -- otherwise the changes would be lost when
 * the Pattern Lab generator is run the next time...
 */
gulp.task('scripts', function(){
  gulp.src(config.scripts.files)
    .pipe(p.sourcemaps.init())
    .pipe(p.concat('scripts.js'))
    .pipe(p.uglify({preserveComments: 'some'}))
    .pipe(p.rename('scripts.min.js'))
    .pipe(p.sourcemaps.write('.'))
    .pipe(gulp.dest(config.scripts.dest))
    .pipe(reload({stream:true}));
  gulp.src(config.scripts.vendor)
    .pipe(gulp.dest(config.scripts.dest))
    .pipe(reload({stream:true}));
});

/**
 * Gulp task: lint:js
 * To do: Add JS Linter
 */

 /**
  * Gulp task: fonts
  * Copy fonts to public/ directory
  */
gulp.task('fonts', function(){
  gulp.src(config.fonts.files)
    .pipe(gulp.dest(config.fonts.dest))
    .pipe(reload({stream:true}));
});

/**
 * Gulp task: images
 * Optimizes (compresses) images for performance.
 */
gulp.task('images', function(){
  gulp.src(config.images.files)
    .pipe(p.imagemin())
    .pipe(gulp.dest(config.images.dest))
    .pipe(reload({stream:true}));
});

 /**
  * Gulp task: patternlab
  * Runs the Pattern Lab builder via PHP script
  */
gulp.task('patternlab', function(){
  gulp.src('',{read:false})
    .pipe(p.shell([
      'php core/builder.php -gpn'
      ]))
    .pipe(reload({stream:true}));
});

/**
 * Gulp task: watch
 * Watches Pattern Lab files, styles, scripts, images, and fonts for changes
 */
gulp.task('watch', function(){
  gulp.watch(config.patternlab.files, ['patternlab']);
  gulp.watch(config.styles.files, ['styles', 'lint:scss']);
  gulp.watch(config.scripts.files, ['scripts']);
  gulp.watch(config.images.files, ['images']);
  gulp.watch(config.fonts.files, ['fonts']);
});

 /**
  * Gulp task: browser-sync
  * Starts the proxied BrowserSync server
  */
gulp.task('browser-sync', function(){
  browserSync({
    server: {
      baseDir: config.root
    },
    ghostMode: true,
    open: "external"
  });
});

/**
 * Gulp task: styleguide
 * Copy styleguide folder from core/ to public/
 */
gulp.task('styleguide', function(){
  gulp.src(config.patternlab.styleguide.files)
    .pipe(gulp.dest(config.patternlab.styleguide.dest));
});

/**
 * Gulp task: default
 * Builds Pattern Lab, triggers BrowserSync, builds all assets, and starts the
 * watcher
 */
gulp.task('default', function(callback){
  runSequence(
    'clean',
    ['lint:scss'],
    // ['patternlab', 'styleguide'],
    ['styles', 'scripts'],
    ['fonts', 'images'],
    // ['browser-sync', 'watch'],
    callback);
});
