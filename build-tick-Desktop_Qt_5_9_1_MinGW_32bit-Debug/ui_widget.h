/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(610, 519);
        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(170, 80, 100, 100));
        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(270, 80, 100, 100));
        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(370, 80, 100, 100));
        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(170, 180, 100, 100));
        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(270, 180, 100, 100));
        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(370, 180, 100, 100));
        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(170, 280, 100, 100));
        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(270, 280, 100, 100));
        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(370, 280, 100, 100));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton1->setText(QString());
        pushButton2->setText(QString());
        pushButton3->setText(QString());
        pushButton4->setText(QString());
        pushButton5->setText(QString());
        pushButton6->setText(QString());
        pushButton7->setText(QString());
        pushButton8->setText(QString());
        pushButton9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
