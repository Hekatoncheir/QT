#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_X 50
#define MAX_Y 30
#define NORMAL_LABEL 0//普通label
#define BORDER_LABEL 1//边界label
#define SNAKE_LABEL 2//蛇身label
#define FOOD_LABEL 3//食物label

#include <QWidget>
#include <QLabel>
#include <QList>
#include <QTimer>
#include <QKeyEvent>
#include <QMap>
#include <QtGlobal>

struct Node{
    QLabel *label;
    int type;//边界：1   蛇身：2  普通：0 食物：3
    int x;
    int y;
};

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = 0);
    void init();
    void drawBorder();//画边界
    void initSnake();
    void moveStep();
    void getHeadTail();//得到头和尾
    bool left();//判断是否能上下左右移动
    bool right();
    bool up();
    bool down();
    void Key(QKeyEvent *e);//键盘事件
//    void gameover();
//    void showAllType();
    void generateFood();//生成食物
    void set_color();
signals:

public slots:
    void slotMoveStep();//槽函数，可以当做普通函数使用


private:
    Node *matrix[MAX_X][MAX_Y];
    QList<Node*> snake;//蛇身
    int dx, dy;
    Node *head;//蛇头指针
    Node *tail;//蛇尾指针
    QTimer timer;

};
#endif // MAINWINDOW_H
