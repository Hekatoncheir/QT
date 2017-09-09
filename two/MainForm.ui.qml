import QtQuick 2.6
import QtQuick.Scene2D 2.9
import Qt.labs.calendar 1.0

Rectangle {
    property alias textEdit: textEdit

    width: 360
    height: 360

    TextEdit {
        id: textEdit
        text: qsTr("Enter some text...")
        verticalAlignment: Text.AlignVCenter
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        Rectangle {
            anchors.fill: parent
            anchors.margins: -10
            color: "transparent"
            border.width: 1
        }
    }
}
