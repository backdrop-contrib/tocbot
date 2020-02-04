(function($) {
  'use strict';

  Backdrop.behaviors.tocbot = {
    attach: function attachTocBot(context, settings) {
      if (settings.tocbot.createAutoIds) {
        // Create automatic ids
        var content = document.querySelector(settings.tocbot.options.contentSelector);
        if (content) {
          var headings = content.querySelectorAll(
            settings.tocbot.options.headingSelector
          );
          var headingMap = {}
  
          Array.prototype.forEach.call(headings, function (heading) {
            var id = heading.id ? heading.id : heading.textContent.trim().toLowerCase()
              .split(' ').join('-').replace(/[\!\@\#\$\%\^\&\*\(\)\:]/ig, '')
            headingMap[id] = !isNaN(headingMap[id]) ? ++headingMap[id] : 0
            if (headingMap[id]) {
              heading.id = id + '-' + headingMap[id]
            } else {
              heading.id = id
            }
          })
        }
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
