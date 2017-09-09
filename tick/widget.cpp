#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QDialog>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton1->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton2->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton3->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton4->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton5->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton6->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton7->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton8->setStyleSheet("background-color:#C0C0C0");
    ui->pushButton9->setStyleSheet("background-color:#C0C0C0");
}

Widget::~Widget()
{
    delete ui;
}

//QIcon

void Widget::on_pushButton1_clicked()
{
    if (people){
        ui->pushButton1->setFont(QFont("Timers", 30, QFont::Black));
        ui->pushButton1->setText(tr("X"));
    }
    else
    {
        ui->pushButton1->setFont(QFont("Timers", 30, QFont::Black));
        ui->pushButton1->setText(tr("O"));
    }
    people = !people;
    ui->pushButton1->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton2_clicked()
{
    if (people)
        ui->pushButton2->setText(tr("X"));
    else
        ui->pushButton2->setText(tr("O"));
    people = !people;
    ui->pushButton2->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton3_clicked()
{
    if (people)
        ui->pushButton3->setText(tr("X"));
    else
        ui->pushButton3->setText(tr("O"));
    people = !people;
    ui->pushButton3->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton4_clicked()
{
    if (people)
        ui->pushButton4->setText(tr("X"));
    else
        ui->pushButton4->setText(tr("O"));
    people = !people;
    ui->pushButton4->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton5_clicked()
{
    if (people)
        ui->pushButton5->setText(tr("X"));
    else
        ui->pushButton5->setText(tr("O"));
    people = !people;
    ui->pushButton5->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton6_clicked()
{
    if (people)
        ui->pushButton6->setText(tr("X"));
    else
        ui->pushButton6->setText(tr("O"));
    people = !people;
    ui->pushButton6->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton7_clicked()
{
    if (people)
        ui->pushButton7->setText(tr("X"));
    else
        ui->pushButton7->setText(tr("O"));
    people = !people;
    ui->pushButton7->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton8_clicked()
{
    if (people)
        ui->pushButton8->setText(tr("X"));
    else
        ui->pushButton8->setText(tr("O"));
    people = !people;
    ui->pushButton8->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

void Widget::on_pushButton9_clicked()
{
    if (people)
        ui->pushButton9->setText(tr("X"));
    else
        ui->pushButton9->setText(tr("O"));
    people = !people;
    ui->pushButton9->setEnabled(false);
    number++;
    if (number == 9)
        hint2();
    else
        hint();
}

bool Widget::detection()
{
    if ( (ui->pushButton1->text() == "X" && ui->pushButton2->text() == "X" && ui->pushButton3->text() == "X") ||
         (ui->pushButton4->text() == "X" && ui->pushButton5->text() == "X" && ui->pushButton6->text() == "X") ||
         (ui->pushButton7->text() == "X" && ui->pushButton8->text() == "X" && ui->pushButton9->text() == "X") ||
         (ui->pushButton1->text() == "X" && ui->pushButton5->text() == "X" && ui->pushButton9->text() == "X") ||
         (ui->pushButton3->text() == "X" && ui->pushButton5->text() == "X" && ui->pushButton7->text() == "X") ||
         (ui->pushButton1->text() == "X" && ui->pushButton4->text() == "X" && ui->pushButton7->text() == "X") ||
         (ui->pushButton2->text() == "X" && ui->pushButton5->text() == "X" && ui->pushButton8->text() == "X") ||
         (ui->pushButton3->text() == "X" && ui->pushButton6->text() == "X" && ui->pushButton9->text() == "X"))
        return true;
    else if ((ui->pushButton1->text() == "O" && ui->pushButton2->text() == "O" && ui->pushButton3->text() == "O") ||
             (ui->pushButton4->text() == "O" && ui->pushButton5->text() == "O" && ui->pushButton6->text() == "O") ||
             (ui->pushButton7->text() == "O" && ui->pushButton8->text() == "O" && ui->pushButton9->text() == "O") ||
             (ui->pushButton1->text() == "O" && ui->pushButton5->text() == "O" && ui->pushButton9->text() == "O") ||
             (ui->pushButton3->text() == "O" && ui->pushButton5->text() == "O" && ui->pushButton7->text() == "O") ||
             (ui->pushButton1->text() == "O" && ui->pushButton4->text() == "O" && ui->pushButton7->text() == "O") ||
             (ui->pushButton2->text() == "O" && ui->pushButton5->text() == "O" && ui->pushButton8->text() == "O") ||
             (ui->pushButton3->text() == "O" && ui->pushButton6->text() == "O" && ui->pushButton9->text() == "O"))
        return true;
    else
        return false;
}

void Widget::hint()
{
    QDialog w;
    QLabel label(&w);
    label.setText("Over!");
    if (detection())
        w.exec();
}

void Widget::hint2()
{
    QDialog w;
    QLabel label(&w);
    label.setText("You arer draw!");
    w.exec();
}
