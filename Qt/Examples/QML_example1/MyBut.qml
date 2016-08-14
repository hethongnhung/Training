import QtQuick 2.0

Rectangle {
    id : tile_
    property alias bgimage: bg.source
    color : "transparent"
    width: 100
    height: 100

    Image {
        id: bg
        anchors.centerIn : parent
        source : "./image/light_off.png"
    }


    MouseArea {
        id: m1
        anchors.fill: parent
    }

    states: [
        State {
            name: "down"
            when: m1.pressed
            PropertyChanges { target: tile_; opacity: 0.5 }
        }
    ]
}
