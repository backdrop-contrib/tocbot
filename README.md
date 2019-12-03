Tocbot
======

The Tocbot module provides a wrapper around the Tocbot library. It creates a
block with a table of contents (TOC), generated from HTML headings. The Tocbot
block makes navigating through documentation pages or long articles easy.

Installation
------------

Install this module using the official Backdrop CMS instructions at
https://backdropcms.org/guide/modules.
  
Configuration
-------------

- Visit the configuration page under **Administration > Configuration > Content
  authoring > Tocbot** (`admin/config/content/tocbot`).
- Change the *Module settings* or the *JavaScript settings* to suit your needs.
- More information about the *JavaScript settings* can be found at
  [tscanlin.github.io/tocbot/#api](https://tscanlin.github.io/tocbot/#api).
  
Usage
-----

The module creates a "Tocbot" block that contains a table of contents. Place
the block in a Backdrop Layout, see https://backdropcms.org/user-guide/blocks.

Coming from Drupal?
-------------------

In contrast to the Drupal version which by default uses CSS and JavaScript from
a CDN, the Backdrop version uses by default local library files bundled with
the module (CDN files are only loaded if the local library isn't available).

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/tocbot/issues

Current Maintainers
-------------------

- [Olaf Grabienski](https://github.com/olafgrabienski)

Credits
-------

- Ported to Backdrop CMS by [Olaf Grabienski](https://github.com/olafgrabienski).
- Originally written for Drupal by [Nicholas Stees](https://www.drupal.org/u/nicholass).
- Based on the [Tocbot library](https://tscanlin.github.io/tocbot).

License
-------

This project is GPL v2 software. 
See the LICENSE.txt file in this directory for complete text.
