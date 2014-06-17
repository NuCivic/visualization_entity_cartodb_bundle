(function($) {
  Drupal.behaviors.visualization_entity_cartodb_bundle = {
    attach: function(context) {
      var settings = Drupal.settings.visualization_entity_cartodb_bundle;
      cartodb.createVis(
        'visualization',
        'http://drkloc.cartodb.com/api/v2/viz/' + settings.viz_uuid + '/viz.json'
      );
    },
  };
})(jQuery);
