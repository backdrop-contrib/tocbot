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
- The defaults should be fine to get started but feel free to change the
  *Module settings* or the *JavaScript settings* to suit your needs.
- More information about the *JavaScript settings* can be found at
  [tscanlin.github.io/tocbot/#api](https://tscanlin.github.io/tocbot/#api).
  
Get started
-----------

With the default configuration, the module creates a "Tocbot" block that
contains a table of contents. When a visitor scrolls down the page, at a certain
point the block will be treated as fixed positioned. While the content of the
page appears in the viewport, the corresponding TOC items will be highlighted,
and nested items will be expanded.

- Create a content page (or a post).
- Put a lot of text in the body, and use HTML headings to divide the content.
- Place the Tocbot block in the sidebar of a corresponding Backdrop Layout.
- Visit the content page, and scroll down to see the block and its behavior.

Coming from Drupal?
-------------------

In contrast to the Drupal version which by default uses CSS and JavaScript from
a CDN, the Backdrop version uses by default local library files bundled with
the module (CDN files are only loaded if the local library isn't available).

Screencast / Screenshots
------------------------

- [Video introduction](https://www.youtube.com/watch?v=awh-JYef2i8) by [Tim Erickson](https://github.com/stpaultim)
- [Screenshots in the Wiki](https://github.com/backdrop-contrib/tocbot/wiki/Screenshots)

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
