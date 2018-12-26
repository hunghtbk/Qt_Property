import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Text {
        anchors.centerIn: parent
        text: MyClass.m_textQML;
    }

    Rectangle {
        width: 200
        height: 200
        color: "black"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                MyClass.setText("hunght ababababababa");
            }
        }
    }
}
