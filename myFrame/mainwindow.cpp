#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include <QMenu>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->label->setPixmap(QPixmap("E:/1.png"));
    ui->pushBtn1->setText(tr("&nihao"));
    ui->pushBtn2->setText(tr("帮助(&H)"));
    ui->pushBtn2->setIcon(QIcon("E:/1.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu * menu = new QMenu(this);
    menu->addAction(QIcon("E:/1.png"), tr("放大"));
    ui->pushBtn3->setMenu(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushBtn1_toggled(bool checked)
{
    qDebug() << tr("按钮是否被按下: ") << checked;
}
