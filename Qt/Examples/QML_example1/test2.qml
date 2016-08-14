import QtQuick 2.0

import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    id : main
    visible: true
    width : 900
    height: 700
    property bool check: false
    Rectangle{
        id : h1
        width : 150
        height: 100
        color : "blue"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                check =! check
                if(check == false)
                    h2.radius = 0
                else
                    h2.radius = 100
            }
        }
    }
    Rectangle{
        id : h2
        x : parent.width - h1.width
        width: 150
        height: 100
        color : "red"
        MouseArea{
            anchors.fill: parent
            drag.target: h2
            drag.axis: Drag.XAxis
            drag.minimumX: 0
            drag.maximumX: main.width - h2.width
        }
    }
}

