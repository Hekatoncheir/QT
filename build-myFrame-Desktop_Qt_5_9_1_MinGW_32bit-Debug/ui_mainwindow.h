/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_3;
    QWidget *page_2;
    QLabel *label_2;
    QToolBox *toolBox;
    QWidget *page_4;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *page_6;
    QLabel *label_5;
    QWidget *page_5;
    QLabel *label_6;
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(699, 879);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 10, 120, 80));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        frame->setMidLineWidth(10);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(150, 0, 301, 131));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setProperty("value", QVariant(456.123));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 150, 256, 192));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(330, 200, 120, 80));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 72, 15));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 72, 15));
        label_2->setFrameShape(QFrame::StyledPanel);
        stackedWidget->addWidget(page_2);
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(20, 350, 351, 331));
        toolBox->setFrameShape(QFrame::Box);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 349, 239));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 331, 16));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 351, 16));
        toolBox->addItem(page_4, QString::fromUtf8("\345\245\275\345\217\213"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 331, 16));
        toolBox->addItem(page_6, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 349, 239));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 341, 16));
        pushBtn1 = new QPushButton(page_5);
        pushBtn1->setObjectName(QStringLiteral("pushBtn1"));
        pushBtn1->setGeometry(QRect(20, 80, 93, 28));
        pushBtn1->setCheckable(true);
        pushBtn2 = new QPushButton(page_5);
        pushBtn2->setObjectName(QStringLiteral("pushBtn2"));
        pushBtn2->setGeometry(QRect(190, 80, 93, 28));
        pushBtn2->setFlat(true);
        pushBtn3 = new QPushButton(page_5);
        pushBtn3->setObjectName(QStringLiteral("pushBtn3"));
        pushBtn3->setGeometry(QRect(110, 140, 93, 28));
        toolBox->addItem(page_5, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 699, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "first", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "second", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("MainWindow", "first", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "second", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "\345\245\275\345\217\213", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("MainWindow", "\351\273\221\345\220\215\345\215\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushBtn1->setText(QString());
        pushBtn2->setText(QString());
        pushBtn3->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "\351\231\214\347\224\237\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
