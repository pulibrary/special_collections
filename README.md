# Rare Books and Special Collections

## Local development with Lando

1. `git clone git@github.com:pulibrary/rbsc_drupal.git`
1. In your local `sites/default/settings.php` file include the following:

    ```
    $databases = array (
      'default' =>
      array (
        'default' =>
        array (
          'database' => 'drupal7',
          'username' => 'drupal7',
          'password' => 'drupal7',
          'host' => 'database',
          'port' => '3306',
          'driver' => 'mysql',
          'prefix' => '',
        ),
      ),
    );

    $base_url = "http://rbsc.lndo.site:8000";
    ```
1. `lando start`
1. `cp drush/rbsc-example.aliases.drushrc.php drush/rbsc.aliases.drushrc.php`
1. Adjust the config values in the  `drush/rbsc.aliases.drushrc.php` file
1. `drush @rbsc.prod sql-dump > dump.sql`
1. `lando db-import dump.sql`
1. `drush rsync @rbsc.prod:%files @rbsc.local:%files`
1. `lando drush uli your-username`
