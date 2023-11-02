import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6
Rectangle{
    Plugin{
        id:mapPlugin
        name: "osm"
    }

    Map{
        id:mapView;
        plugin: mapPlugin;
        anchors.fill:parent;
        center:QtPositioning.coordinate(11.49,77.27);
        zoomLevel:14;
    }
    }
