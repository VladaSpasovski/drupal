IMCE Prettyfiles
================

Syncing content between different website instances can be quite painful,
especially if you're using a hosting management tool like Aegir which
takes over a lot of the configuration of your website.
Your image files are then located in a host name specific folder like eg:

> /sites/hostname_of_your_website/files/..

IMCE in combination with the WYSIWYG will write the full paths
into the HTML content of a WYSIWYG field like:

> /sites/hostname_of_your_website/files/image.png

Of course that will fail as soon, as you sync the database 
to a different server with a new host name,
as "hostname_of_your_website" has now changed and
the file isn't available under the outdated file path anymore.

This module modifies how IMCE inserts the image file
into the editor by cutting of the site specific path
elements from the inserted image file.

> /sites/hostname_of_your_website/files/image.png

will become

> /files/image.png

A patch for the .htaccess file of Drupal will then redirect
any requests for image files under 

> "/files/.." 

to

> "/sites/hostname_of_your_website/files/".

Installation
------------

* Enable the module.
* Add the additions of the file vhost_addition.conf to
  your .htaccess file or your vhost configuration.
* Test to insert images into the body text, file paths 
  should now be rewritten to /files/filename.

Drush integration
-----------------

The module also comes with a drush command to cleanup
existing dirty file paths:

drush @site-alias replace-local-file-paths.

You'll also find a file with the configuration
changes for the vhost file, if you don't want to hack core (the .htaccess).

The module has originally been developed by dman.
