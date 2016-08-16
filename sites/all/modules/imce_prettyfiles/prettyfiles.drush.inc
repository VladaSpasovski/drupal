<?php

/**
 * @file
 * Example drush command.
 *
 * To run this *fun* command, execute `sudo drush --include=./examples mmas`
 * from within your drush directory.
 *
 * See `drush topic docs-commands` for more information about command authoring.
 *
 * You can copy this file to any of the following
 * 1. A .drush folder in your HOME folder.
 * 2. Anywhere in a folder tree below an active module on your site.
 * 3. /usr/share/drush/commands (configurable)
 * 4. In an arbitrary folder specified with the --include option.
 * 5. Drupal's sites/all/drush folder.
 */

/**
 * Implements hook_drush_command().
 *
 * In this hook, you specify which commands your
 * drush module makes available, what it does and
 * description.
 *
 * Notice how this structure closely resembles how
 * you define menu hooks.
 *
 * See `drush topic docs-commands` for a list of recognized keys.
 */
function prettyfiles_drush_command() {
  $items = array();

  // The 'make-me-a-sandwich' command.
  $items['replace-local-file-paths'] = array(
    'description' => "Tries to replace all local environment file paths set by IMCE with a short file path like '/files/file_name.extension'.",
    'arguments' => array(
      'custom-file-path' => 'The local file path you want to replace.',
    ),
    'options' => array(),
    'examples' => array(
      'drush rlfp' => 'Replaces all file paths like /sites/domain_name/files/* with Aegir short file paths like /files/*',
      'drush rlfp folder_1/folder_2' => 'Replaces all file paths like /folder_1/folder_2* with Aegir short file paths like /files/*',
    ),
    'aliases' => array('rlfp'),
    // No bootstrap at all.
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function prettyfiles_drush_help($section) {
  switch ($section) {
    case 'drush:replace-local-file-paths':
      return dt("This command will try to replace all local environment file paths with pretty file paths like '/file/file_name.extension'.");

    // The 'title' meta item gives a name to a command group in `drush help`.
    // If a title is not defined, the default is "All commands in ___",
    // with the specific name of the commandfile (e.g. sandwich).
    // Command files with less than four commands,
    // will be placed in "Other commands" section,
    // _unless_ they define a title.
    // It is therefore preferable to not define a title,
    // unless the file defines a lot of commands.
    case 'meta:replace-local-file-paths:title':
      return dt("Pretty file paths commands");

    // The 'summary' meta item is displayed in `drush help --filter`,
    // and is used to give a general idea what the commands do,
    // and what they have in common.
    case 'meta:replace-local-file-paths:summary':
      return dt("Replaces local file paths with a generic one.");

  }
}

/**
 * Example drush command callback. This is where the action takes place.
 *
 * The function name should be same as command name but with dashes turned to
 * underscores and 'drush_commandfile_' prepended, where 'commandfile' is
 * taken from the file 'commandfile.drush.inc', which here is 'sandwich'.
 * Note also that a simplification step is also done in instances where
 * the commandfile name is the same as the beginning of the command name,
 * "drush_example_example_foo" is simplified to just "drush_example_foo".
 * To also implement a hook that is called before your command, implement
 * "drush_hook_pre_example_foo".  For a list of all available hooks for a
 * given command, run drush in --debug mode.
 *
 * If for some reason you do not want your hook function to be named
 * after your command, you may define a 'callback' item in your command
 * object that specifies the exact name of the function that should be
 * called.  However, the specified callback function must still begin
 * with "drush_commandfile_" (e.g. 'callback' => "drush_example_foo_execute")
 * if you want that all hook functions are still called (e.g.
 * drush_example_pre_foo_execute, and so on).
 *
 * In this function, all of Drupal's API is (usually) available, including
 * any functions you have added in your own modules/themes.
 *
 * @see drush_invoke()
 * @see drush.api.php
 */
function drush_prettyfiles_replace_local_file_paths($old_file_path = '') {

  $site_alias = drush_sitealias_get_record('@self');

  if (!$old_file_path) {
    $old_file_path = 'sites/' . str_replace('http://', '', $site_alias['uri']) . '/files';
  }

  $new_file_path = 'files';

  drush_print_r('----------------------------------------------------------------------');

  drush_print_r('DRUPAL 7 ONLY! This command will replace all occurrences of file paths like "/' . $old_file_path . '/*" with the Aegir short path "/' . $new_file_path . '/*"');
  drush_print_r('The code goes through body text fields and custom fields with long text as data type.');

  drush_print_r('----------------------------------------------------------------------');
  $proceed = drush_choice(array(1 => 'Yes'), 'Did you do a database backup? Do you really want to proceed?.', '!value');

  if ($proceed) {
    drush_log(
    dt('Changed paths from @old_file_path to @new_file_path',
    array('@old_file_path' => $old_file_path, '@new_file_path' => $new_file_path)));

    db_update('field_data_body')
      ->expression('body_value', 'REPLACE(body_value, :old_file_path, :new_file_path)', array(
        ':old_file_path' => $old_file_path,
        ':new_file_path' => $new_file_path,
      ))
      ->execute();

    db_update('field_revision_body')
      ->expression('body_value', 'REPLACE(body_value, :old_file_path, :new_file_path)', array(
        ':old_file_path' => $old_file_path,
        ':new_file_path' => $new_file_path,
      ))
      ->execute();

    db_update('block_custom')
      ->expression('body', 'REPLACE(body, :old_file_path, :new_file_path)', array(
        ':old_file_path' => $old_file_path,
        ':new_file_path' => $new_file_path,
      ))
      ->execute();
    $result = db_query("SELECT field_name FROM {field_config} WHERE type = 'text_long'");

    foreach ($result as $record) {
      $field_name = $record->field_name;
      db_update('field_revision_' . $field_name)
        ->expression($field_name . '_value', 'REPLACE(' . $field_name . '_value, :old_file_path, :new_file_path)', array(
          ':old_file_path' => $old_file_path,
          ':new_file_path' => $new_file_path,
        ))
        ->execute();
    }
  }
}
