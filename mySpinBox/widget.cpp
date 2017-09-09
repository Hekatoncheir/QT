#include "widget.h"
#include "ui_widget.h"
#include <QDateTimeEdit>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setDisplayFormat(tr("yyyy年MM月dd日dddHH时mm分ss秒"));
}

Widget::~Widget()
{
    delete ui;
}
