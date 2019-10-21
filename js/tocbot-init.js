(function($) {
  'use strict';

  Backdrop.behaviors.tocbot = {
    attach: function attachTocBot(context, settings) {
      if (settings.tocbot.createAutoIds) {
        // Create automatic ids
        $(settings.tocbot.options.contentSelector + " :header").each(
          function(index) {
            // Check to see if it has an id if not generate one
            if ($(this).attr("id").length === 0) {
              var hyphenated = $(this)
                .text()
                .replace(/\s/g, "-");
              $(this).attr("id", hyphenated + "-" + index);
            }
          }
        );
      }
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

        // fix tocbot offsettop bug
        if (settings.tocbot.options.fixedSidebarOffset === "auto") {
          var element = document.querySelector(
            settings.tocbot.options.tocSelector
          );
          var yPosition = 0;

            while (element) {
              yPosition +=
                element.offsetTop -
                element.scrollTop +
                element.clientTop;
              element = element.offsetParent;
            }

          settings.tocbot.options.fixedSidebarOffset = yPosition;
        }

        tocbot.init(settings.tocbot.options);
        if (settings.tocbot.tocTitle.length > 0) {
          $(settings.tocbot.options.tocSelector).prepend(
            "<strong class='toc-title'>" +
              settings.tocbot.tocTitle +
              "</strong>"
          );
        }
      }
    },
  };
})(jQuery);
