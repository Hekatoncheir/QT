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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 72, 15));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 20, 72, 15));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 72, 15));
        lineEdit1 = new QLineEdit(Widget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(180, 60, 113, 21));
        lineEdit1->setEchoMode(QLineEdit::Password);
        lineEdit2 = new QLineEdit(Widget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(190, 100, 113, 21));
        lineEdit3 = new QLineEdit(Widget);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(180, 140, 113, 21));
        lineEdit4 = new QLineEdit(Widget);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(180, 200, 113, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        lineEdit2->setInputMask(QApplication::translate("Widget", "AA-90-bb-! aa\\#H;*", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
