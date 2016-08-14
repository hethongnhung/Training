import QtQuick 2.3
import QtQuick.Window 2.2
import "./"

Window {
    id : main
    visible: true
    width : 900
    height: 700

    MyBut{
        id : bt1
        x : 50
        y : 50
    }
    MyBut{
        id : bt2
        anchors.centerIn: parent
    }
    MyBut{
        id : bt3
        x : 300
        y : 300
    }
}

