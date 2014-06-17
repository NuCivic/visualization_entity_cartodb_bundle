(function($) {
  Drupal.behaviors.visualization_entity_cartodb_bundle = {
    attach: function(context) {
      var settings = Drupal.settings.visualization_entity_cartodb_bundle;
      cartodb.createVis(
        'visualization',
        settings.viz_json
      );
    },
  };
})(jQuery);
