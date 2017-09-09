import QtQuick 2.6
import QtQuick.Controls 2.1

Page {
    id: root

    header: ToolBar {
        Label {
            text: qsTr("联系人")
            font.pixelSize: 20
            anchors.centerIn: parent
        }
    }

    ListView {
        id: listView
        anchors.fill: parent
        topMargin: 48
        leftMargin: 48
        bottomMargin: 48
        rightMargin: 48
        spacing: 20
        model: ["Albert Einstein", "Ernest Hemingway", "Hans Gude"]
        delegate: ItemDelegate {
            text: modelData
            width: listView.width - listView.leftMargin - listView.rightMargin
            height: avatar.implicitHeight
            leftPadding: avatar.implicitWidth + 32
            onClicked: root.StackView.view.push("qrc:/ConversationPage.qml", { inConversationWith: modelData })

            Image {
                id: avatar
                source: "images/" + modelData + ".png"
                sourceSize.height: 40
                sourceSize.width: 40
            }
        }
    }
}
