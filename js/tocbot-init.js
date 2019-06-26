(function($) {
  'use strict';

  Drupal.behaviors.tocbot = {
    attach: function attachTocBot(context, settings) {
      if (
        $(settings.tocbot.options.tocSelector).length &&
        $(settings.tocbot.options.contentSelector + ' :header').not(
          settings.tocbot.options.ignoreSelector
        ).length >= parseInt(settings.tocbot.minActivate)
      ) {
        // Activate
        if (settings.tocbot.extrabodyclass.length > 0) {
          $('body').addClass(settings.tocbot.extrabodyclass);
        }

        tocbot.init(settings.tocbot.options);
        if (settings.tocbot.tocTitle.length > 0) {
          $('.js-toc').prepend(
            '<strong class=\'toc-title\'>' +
              settings.tocbot.tocTitle +
              '</strong>'
          );
        }
      }
    },
  };
})(jQuery);
