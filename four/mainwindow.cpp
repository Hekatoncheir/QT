#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_showChildButton_clicked()
{
    QDialog * dialog = new QDialog(this);
    dialog -> show();
}

void MainWindow::on_pushButton_clicked()
{
    close();
    MyDialog dlg;
    if (dlg.exec() == QDialog::Accepted) show();
}
