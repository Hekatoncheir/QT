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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_S;
    QAction *action_A;
    QAction *action_P;
    QAction *action_X;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_T;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *shapeComboBox;
    QLabel *label_2;
    QComboBox *penStyleComboBox;
    QLabel *label_3;
    QSpinBox *penWidthSpinBox;
    QLabel *label_4;
    QComboBox *penColorComboBox;
    QLabel *label_5;
    QComboBox *brushColorComboBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon1);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon2);
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QStringLiteral("action_A"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon3);
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QStringLiteral("action_P"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_P->setIcon(icon4);
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QStringLiteral("action_X"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_X->setIcon(icon5);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon6);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon7);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/images/zoom-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon8);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/images/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon9);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/images/shear.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_8->setIcon(icon10);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_10->setIcon(icon11);
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/images/tool.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_11->setIcon(icon12);
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/images/help.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_12->setIcon(icon13);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 19));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_T = new QMenu(menuBar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        shapeComboBox = new QComboBox(dockWidgetContents);
        shapeComboBox->setObjectName(QStringLiteral("shapeComboBox"));

        gridLayout->addWidget(shapeComboBox, 1, 0, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        penStyleComboBox = new QComboBox(dockWidgetContents);
        penStyleComboBox->setObjectName(QStringLiteral("penStyleComboBox"));

        gridLayout->addWidget(penStyleComboBox, 3, 0, 1, 1);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        penWidthSpinBox = new QSpinBox(dockWidgetContents);
        penWidthSpinBox->setObjectName(QStringLiteral("penWidthSpinBox"));
        penWidthSpinBox->setMinimum(1);

        gridLayout->addWidget(penWidthSpinBox, 5, 0, 1, 1);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        penColorComboBox = new QComboBox(dockWidgetContents);
        penColorComboBox->setObjectName(QStringLiteral("penColorComboBox"));

        gridLayout->addWidget(penColorComboBox, 7, 0, 1, 1);

        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        brushColorComboBox = new QComboBox(dockWidgetContents);
        brushColorComboBox->setObjectName(QStringLiteral("brushColorComboBox"));

        gridLayout->addWidget(brushColorComboBox, 9, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_T->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addSeparator();
        menu_F->addAction(action_S);
        menu_F->addAction(action_A);
        menu_F->addSeparator();
        menu_F->addAction(action_P);
        menu_F->addSeparator();
        menu_F->addAction(action_X);
        menu_E->addAction(action_4);
        menu_E->addAction(action_5);
        menu_E->addAction(action_6);
        menu_E->addAction(action_7);
        menu_E->addAction(action_8);
        menu_E->addSeparator();
        menu_E->addAction(action_10);
        menu_T->addAction(action_11);
        menu_H->addAction(action_12);
        mainToolBar->addAction(action_N);
        mainToolBar->addAction(action_O);
        mainToolBar->addAction(action_S);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_4);
        mainToolBar->addAction(action_5);
        mainToolBar->addAction(action_6);
        mainToolBar->addAction(action_7);
        mainToolBar->addAction(action_8);
        mainToolBar->addAction(action_10);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_11);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_N->setStatusTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_O->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_S->setStatusTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_A->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_A->setStatusTip(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        action_P->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_P->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_P->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_X->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        action_4->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_4->setStatusTip(QApplication::translate("MainWindow", "\345\233\276\347\211\207\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_5->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_5->setStatusTip(QApplication::translate("MainWindow", "\345\233\276\347\211\207\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_5->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_6->setText(QApplication::translate("MainWindow", "\350\277\230\345\216\237", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_6->setStatusTip(QApplication::translate("MainWindow", "\350\277\230\345\216\237\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+Home", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_7->setStatusTip(QApplication::translate("MainWindow", "\346\227\213\350\275\254\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_7->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_8->setText(QApplication::translate("MainWindow", "\346\213\211\344\274\270", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_8->setStatusTip(QApplication::translate("MainWindow", "\346\213\211\344\274\270\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_8->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_10->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_10->setStatusTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_10->setShortcut(QApplication::translate("MainWindow", "Ctrl+Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_11->setText(QApplication::translate("MainWindow", "\347\273\230\345\233\276\345\267\245\345\205\267\346\240\217", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_11->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\273\230\345\233\276\345\267\245\345\205\267", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        action_12->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\234\254\350\275\257\344\273\266", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_12->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_T->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267(&T)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\347\224\273\345\233\276\345\267\245\345\205\267", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\345\275\242\357\274\232", Q_NULLPTR));
        shapeComboBox->clear();
        shapeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\233\264\347\272\277", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\237\251\345\275\242", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\244\255\345\234\206", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        penStyleComboBox->clear();
        penStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\256\236\347\272\277", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\202\271\347\272\277", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\347\272\277\345\256\275\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\224\273\347\254\224\351\242\234\350\211\262\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\241\253\345\205\205\351\242\234\350\211\262\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H