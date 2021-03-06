#RBSC Website Theme

For Drupal projects; however, styles can be derived from Sass files.

## Getting Started with location development
1. First enable the drupal browsersync module
2. Then
```
cd to/rbsc/
npm install
```
3. To run interactively for local development do:  
```
cd to/rbsc
gulp
```

## Deployment
1. Make sure the deployment server has an up to date verion of nodejs >= 4.2.1 and npm >= 2.14.7.
2. Make sure deployment server has global gulp executable. 
3. To deploy the theme's images/styles/styles do: 
```
cd to/rbsc
gulp deploy
```



## Sass Architecture

Based on [Sass Guidelines](http://sass-guidelin.es/)

- `base/` The base/ folder holds what we might call the boilerplate code for the project. In there, you will find the reset file, some typographic rules, and a stylesheet defining some standard styles for commonly used HTML elements
- `components/` For smaller components, there is the components/ folder. While layout/ is macro (defining the global wireframe), components/ is more focused on widgets. It contains all kind of specific modules like a slider, a loader, a widget, and basically anything along those lines. There are usually a lot of files in components/ since the whole site/application should be mostly composed of tiny modules.
- `layouts/` The layout/ folder contains everything that takes part in laying out the site or application. This folder could have stylesheets for the main parts of the site (header, footer, navigation, sidebar…), the grid system or even CSS styles for all the forms.
- `sites/` If you have site-specific styles, it is better to put them in a sites/ folder, in a file named after the site.
- `themes/` On large sites and applications, it is not unusual to have different themes. There are certainly different ways of dealing with themes but I personally like having them all in a themes/ folder.
- `utils/` The utils/ folder gathers all Sass tools and helpers used across the project. Every global variable, function, mixin and placeholder should be put in here.
- `vendor/` The vendors/ folder contains all the CSS files from external libraries and frameworks – Bourbon, Bitters, and so on. Putting those aside in the same folder is a good way to say “Hey, this is not from me, not my code, not my responsibility”.