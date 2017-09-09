#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QValidator * validator = new QIntValidator(100, 999, this);
    ui->lineEdit3->setValidator(validator);
    QStringList wordList;
    wordList<<"Qt"<<"Qt Creator"<<tr("Docker-engine");
    QCompleter * completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit4->setCompleter(completer);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_lineEdit2_returnPressed()
{
    ui->lineEdit3->setFocus();
    qDebug()<<ui->lineEdit2->text();
    qDebug()<<ui->lineEdit2->displayText();
}
