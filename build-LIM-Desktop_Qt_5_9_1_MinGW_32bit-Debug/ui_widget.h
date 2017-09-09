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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *fontsizecomboBox;
    QToolButton *textcolor;
    QToolButton *sendfile;
    QToolButton *save;
    QToolButton *clear;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QPushButton *send;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(881, 469);
        horizontalLayout_4 = new QHBoxLayout(Widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setFrameShadow(QFrame::Sunken);
        textBrowser->setOpenExternalLinks(false);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy1);
        fontComboBox->setMinimumSize(QSize(1, 25));

        horizontalLayout->addWidget(fontComboBox);

        fontsizecomboBox = new QComboBox(Widget);
        fontsizecomboBox->setObjectName(QStringLiteral("fontsizecomboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontsizecomboBox->sizePolicy().hasHeightForWidth());
        fontsizecomboBox->setSizePolicy(sizePolicy2);
        fontsizecomboBox->setMinimumSize(QSize(0, 25));
        fontsizecomboBox->setEditable(true);

        horizontalLayout->addWidget(fontsizecomboBox);

        textcolor = new QToolButton(Widget);
        textcolor->setObjectName(QStringLiteral("textcolor"));
        textcolor->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/textcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        textcolor->setIcon(icon);
        textcolor->setIconSize(QSize(24, 24));
        textcolor->setCheckable(false);
        textcolor->setAutoRaise(true);

        horizontalLayout->addWidget(textcolor);

        sendfile = new QToolButton(Widget);
        sendfile->setObjectName(QStringLiteral("sendfile"));
        sendfile->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendfile->setIcon(icon1);
        sendfile->setIconSize(QSize(24, 24));
        sendfile->setCheckable(false);
        sendfile->setAutoRaise(true);

        horizontalLayout->addWidget(sendfile);

        save = new QToolButton(Widget);
        save->setObjectName(QStringLiteral("save"));
        save->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/Floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon2);
        save->setIconSize(QSize(24, 24));
        save->setCheckable(false);
        save->setAutoRaise(true);

        horizontalLayout->addWidget(save);

        clear = new QToolButton(Widget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/Bin (empty).png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon3);
        clear->setIconSize(QSize(24, 24));
        clear->setCheckable(false);
        clear->setAutoRaise(true);

        horizontalLayout->addWidget(clear);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);
        textEdit->setMinimumSize(QSize(1, 1));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        close = new QPushButton(Widget);
        close->setObjectName(QStringLiteral("close"));
        close->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(close);

        send = new QPushButton(Widget);
        send->setObjectName(QStringLiteral("send"));
        send->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(send);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/User.png"), QSize(), QIcon::Normal, QIcon::On);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setIcon(icon4);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);

        horizontalLayout_3->addWidget(tableWidget);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        retranslateUi(Widget);

        fontsizecomboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "LIM", Q_NULLPTR));
        fontsizecomboBox->clear();
        fontsizecomboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "9", Q_NULLPTR)
         << QApplication::translate("Widget", "10", Q_NULLPTR)
         << QApplication::translate("Widget", "11", Q_NULLPTR)
         << QApplication::translate("Widget", "12", Q_NULLPTR)
         << QApplication::translate("Widget", "13", Q_NULLPTR)
         << QApplication::translate("Widget", "14", Q_NULLPTR)
         << QApplication::translate("Widget", "15", Q_NULLPTR)
         << QApplication::translate("Widget", "16", Q_NULLPTR)
         << QApplication::translate("Widget", "17", Q_NULLPTR)
         << QApplication::translate("Widget", "18", Q_NULLPTR)
         << QApplication::translate("Widget", "19", Q_NULLPTR)
         << QApplication::translate("Widget", "20", Q_NULLPTR)
         << QApplication::translate("Widget", "21", Q_NULLPTR)
         << QApplication::translate("Widget", "22", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        textcolor->setToolTip(QApplication::translate("Widget", "\345\255\227\344\275\223\351\242\234\350\211\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        textcolor->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sendfile->setToolTip(QApplication::translate("Widget", "\344\274\240\351\200\201\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sendfile->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        save->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        save->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clear->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        close->setText(QApplication::translate("Widget", "\345\205\263\351\227\255(&C)", Q_NULLPTR));
        send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201(&S)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\344\277\241\346\201\257\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
