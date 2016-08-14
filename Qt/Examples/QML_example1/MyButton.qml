import QtQuick 2.0

Item {
    id : bt
    property bool check: false
    Image {
        id: bg
        anchors.centerIn : parent
        source : "image/light_off.png"
    }

    MouseArea{
        id : m1
        anchors.fill: parent
        onClicked: {
            check = ! check
            if(check == true)
                bg.source ="image/light_on.png"
            else
                bg.source = "image/light_off.png"
            console.log("button clicked")
        }
    }

    states: [
        State {
            name: "down"
            when: m1.pressed
            PropertyChanges { target: bt; opacity: 0.5 }
        }
    ]
}

