(function($) {
  /*
   * Perfect Scrollbar Script.
   *
   */
  Drupal.behaviors.tinyScrollbar = {
    attach: function(context, settings) {
    var $attribute;
    scroll_attributes = Drupal.settings.perfect_scrollbar;
    if(Drupal.settings.perfect_scrollbar_classes || Drupal.settings.perfect_scrollbar_ids) {
      $.each(scroll_attributes, function( index, value ) {
        $.each(value, function( index1, value1 ) {
          if(index1 == 'class' || index1 == 'id' ) {
            (index1 == 'class') ? $attribute = '.'+value1 : $attribute = '#'+value1;
             $($attribute).css('position','relative');
             $($attribute).perfectScrollbar();
           }
           else{
            $($attribute).css(index1,value1);
          }
        });
      });
    }
  }
};
//end
})(jQuery);
