NOTE: I've just started the port to Backdrop and am working on it. The module isn't ready to use for Backdrop so far.

# TOCBOT DRUPAL MODULE

## INTRODUCTION

This module provides a wrapper around Tocbot which builds an automatic table of
contents (TOC) from headings in an HTML document. This is useful for
documentation websites or long markdown pages because it makes them easier
to navigate.

- A block is created that will contain the automatic table of contents or
specify you own location such as an empty div tag in you .tpl files.
- You can configure most of the Javascript settings from a Drupal (such as
where to look to grab headings)
- A minimum limit can be set so it wont activate on simple pages (default 3)
- Uses css/js from a CDN by default, but you can provide library files if
you want to host those locally

## REQUIREMENTS

This module is tested on Drupal 7.

## INSTALLATION

### CDN BY DEFAULT

This module will load the tocbot library by CDN by default, if you want to
host it locally read the LOCAL INSTALLATION section

### LOCAL INSTALLATION

If you place a copy of the CDN files into your /library folder this module
will use those instead of the CDN versions.

- https://cdnjs.cloudflare.com/ajax/libs/tocbot/4.4.2/tocbot.min.js
  - /libraries/tocbot/js/tocbot.min.js
- https://cdnjs.cloudflare.com/ajax/libs/tocbot/4.4.2/tocbot.css
  - /libraries/tocbot/css/tocbot.css

## CONFIGURATION

The Tocbot module admin interface is located at
`admin/config/content/tocbot` more explination of those settings can be
found at [tscanlin.github.io/tocbot/#api](https://tscanlin.github.io/tocbot/#api)
