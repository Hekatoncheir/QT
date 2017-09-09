#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::trans(char key)
{
    text.push_back(QString(key));
    ui->lineEdit->setFont(QFont("Timers", 28, QFont::Black));
    ui->lineEdit->setText(text);
}

void Widget::on_pushButton_4_clicked()
{
    ui->lineEdit->clear();
    text.clear();
}

void Widget::on_pushButton_11_clicked()
{
    ui->lineEdit->backspace();
    text.chop(1);
}

void Widget::on_pushButton_clicked()
{
    if (*(text.end()-1) == '+' || *(text.end()-1) == '-' || *(text.end()-1) == '*' || *(text.end()-1) == '/' || text.isEmpty()){
        trans('(');
        ok = true;
    }
}

void Widget::on_pushButton_5_clicked()
{
    if (*(text.end()-1) != ')' && *(text.end()-1) != '(' && *(text.end()-1) != '.' && *(text.end()-1) != '+' && *(text.end()-1) != '-' && *(text.end()-1) != '*' && *(text.end()-1) != '/' && ok){
        trans(')');
        ok = false;
    }
}

void Widget::on_pushButton_7_clicked()
{
    if (*(text.end()-1) == '+' || *(text.end()-1) == '-' || *(text.end()-1) == '/'){
        text.chop(1);
        trans('*');
    }
    else if (*(text.end()-1) != '.' && *(text.end()-1) != '*' && !text.isEmpty())
        trans('*');
}

void Widget::on_pushButton_2_clicked()
{
    if (*(text.end()-1) != ')')
        trans('7');
}

void Widget::on_pushButton_3_clicked()
{
    if (*(text.end()-1) != ')')
        trans('8');
}

void Widget::on_pushButton_6_clicked()
{
    if (*(text.end()-1) != ')')
        trans('9');
}

void Widget::on_pushButton_8_clicked()
{
    if (*(text.end()-1) == '+' || *(text.end()-1) == '-' || *(text.end()-1) == '*'){
        text.chop(1);
        trans('/');
    }
    else if (*(text.end()-1) != '.' && *(text.end()-1) != '/' && !text.isEmpty())
        trans('/');
}

void Widget::on_pushButton_9_clicked()
{
    if (*(text.end()-1) != ')')
        trans('4');
}

void Widget::on_pushButton_12_clicked()
{
    if (*(text.end()-1) != ')')
        trans('5');
}

void Widget::on_pushButton_15_clicked()
{
    if (*(text.end()-1) != ')')
        trans('6');
}

void Widget::on_pushButton_18_clicked()
{
    if (*(text.end()-1) == '+' || *(text.end()-1) == '*' || *(text.end()-1) == '/'){
        text.chop(1);
        trans('-');
    }
    else if (*(text.end()-1) != '.' && *(text.end()-1) != '-')
        trans('-');
}

void Widget::on_pushButton_10_clicked()
{
    if (*(text.end()-1) != ')')
        trans('1');
}

void Widget::on_pushButton_13_clicked()
{
    if (*(text.end()-1) != ')')
        trans('2');
}

void Widget::on_pushButton_16_clicked()
{
    if (*(text.end()-1) != ')')
        trans('3');
}

void Widget::on_pushButton_19_clicked()
{
    if (*(text.end()-1) == '*' || *(text.end()-1) == '-' || *(text.end()-1) == '/'){
        text.chop(1);
        trans('+');
    }
    else if (*(text.end()-1) != '.' && *(text.end()-1) != '+' && !text.isEmpty())
        trans('+');
}

void Widget::on_pushButton_14_clicked()
{
    if (*(text.end()-1) != ')')
        trans('0');
}

void Widget::on_pushButton_17_clicked()
{
    if (*(text.end()-1) != '(' && *(text.end()-1) != ')' && *(text.end()-1) != '.' && *(text.end()-1) != '+' && *(text.end()-1) != '-' && *(text.end()-1) != '*' && *(text.end()-1) != '/' && !text.isEmpty())
        trans('.');
}

void Widget::on_pushButton_20_clicked()
{
    if (!ok && *(text.end()-1) != '.' && *(text.end()-1) != '+' && *(text.end()-1) != '-' && *(text.end()-1) != '*' && *(text.end()-1) != '/'){
    QString result = get_result(get_postfix());
    ui->lineEdit->clear();
    text.clear();
    ui->lineEdit->setText(result);
    }
}

QList<QString> Widget::get_postfix()
{
    QString number_temp;
    QStack<QString> tem;
    QList<QString> equation;
    QMap<QString, int> priority;
    priority.insert(QString('+'),1);
    priority.insert(QString('-'),1);
    priority.insert(QString('*'),2);
    priority.insert(QString('/'),2);
    if (text.at(0) == '-'){
        number_temp.push_back(QString('-'));
        text.remove(0,1);
    }
    qDebug()<<text;
    for (int i = 0;i < text.length();i++)
    {
        if (text.at(i) != '+' && text.at(i) != '-' && text.at(i) != '*' && text.at(i) != '/' && text.at(i) != '(' && text.at(i) != ')')
            number_temp.push_back(text.at(i));
        else if (text.at(i) == '('){
            if (text.at(i+1) == '-'){
                number_temp.push_back(QString('-'));
                text.remove(i+1,1);
                qDebug()<<text;
            }
            tem.push(text.at(i));
        }
        else if (text.at(i) == '+' || text.at(i) == '-' || text.at(i) == '*' || text.at(i) == '/')
        {
            if (!number_temp.isEmpty()){
                equation.push_back(number_temp);
                number_temp.clear();
            }
            while (!tem.empty()){
                if (tem.top() != '('){
                    if (priority.value(tem.top()) >= priority.value(text.at(i)))
                        equation.push_back(tem.pop());
                    else if (priority.value(tem.top()) < priority.value(text.at(i)))
                        break;
                }
                if (!tem.empty())
                    if (tem.top() == '(')
                        break;
            }
            tem.push(text.at(i));
        }
        else if (text.at(i) == ')')
        {
            equation.push_back(number_temp);
            number_temp.clear();
            while (tem.top() != '(')
                equation.push_back(tem.pop());
            tem.pop();
        }
    }
    if (!number_temp.isEmpty()){
        equation.push_back(number_temp);
        number_temp.clear();
    }
    while (!tem.empty())
        equation.push_back(tem.pop());
    return equation;
}

QString Widget::get_result(QList<QString> list)
{
    QStack<QString> tem;
    QList<QString>::iterator i;
    for (i=list.begin();i!=list.end();i++)
    {
        qDebug() << *i;
        if (*i != '+' && *i != '-' && *i != '*' && *i != '/')
            tem.push(*i);
        else if (*i == '+')
        {
            double a = tem.pop().toDouble();
            double b = tem.pop().toDouble();
            tem.push(QString::number(a+b, 10, 2));
            qDebug() << tem.top();
        }
        else if (*i == '-')
        {
            double a = tem.pop().toDouble();
            double b = tem.pop().toDouble();
            tem.push(QString::number(b-a, 10, 2));
            qDebug() << tem.top();
        }
        else if (*i == '*')
        {
            double a = tem.pop().toDouble();
            double b = tem.pop().toDouble();
            tem.push(QString::number(a*b, 10, 2));
            qDebug() << tem.top();
        }
        else if (*i == '/')
        {
            double a = tem.pop().toDouble();
            double b = tem.pop().toDouble();
            tem.push(QString::number(b/a, 10, 2));
            qDebug() << tem.top();
        }
        else if (tem.size() == 1)
            break;
    }
    return tem.pop();
}
