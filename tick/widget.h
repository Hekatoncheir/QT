#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QIcon>
static int number = 0;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

private:
    Ui::Widget *ui;
    bool people = true;
     set_icon();
    bool detection();
    void hint();
    void hint2();
};

#endif // WIDGET_H
