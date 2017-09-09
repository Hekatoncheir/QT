#include "mainwindow.h"
#include "mydialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MyDialog dialog;
    if (dialog.exec() == QDialog::Accepted){
        w.show();
        return a.exec();
    }
    else return 0;
}
