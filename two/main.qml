import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MainForm {
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent
        mouseArea.onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }

        TextEdit {
            id: textEdit
            x: -530
            y: -59
            width: 80
            height: 20
            text: qsTr("Hollo,wold")
            font.pixelSize: 12
        }

        Flickable {
            id: flickable
            x: -588
            y: -67
            width: 256
            height: 166
        }

        Item {
            id: item1
            x: -530
            y: -67
            width: 200
            height: 200
        }
    }
}
