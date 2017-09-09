#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QMap>
#include <QList>
#include <QStack>
#include <QDebug>
static QString text;
//static QMap<int, char> map = {(1,'1'), (2,'2'),(3,'3'),(4,'4'),(5,'5'),(6,'6'),(7,'7'),(8,'8'),(9,'9'),(10,'('),(11,')'),(12,'+'),(13,'-'),(14,'*'),(15,'/'),(16,'.'),(17,'0')};
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void trans(char key);

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::Widget *ui;
    bool ok = false;
    QString get_result(QList<QString> list);
    QList<QString> get_postfix();
};

#endif // WIDGET_H
