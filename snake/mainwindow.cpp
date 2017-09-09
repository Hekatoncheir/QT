#include "mainwindow.h"
#include <QDebug>
#include <QString>
#include <QTimer>
#include <QMessageBox>
#include <QKeyEvent>
#include <ctime>

Board::Board(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("snake");
    init();
    drawBorder();
    initSnake();
    moveStep();
    generateFood();

    connect(&timer, SIGNAL(timeout()), this, SLOT(slotMoveStep()));
    timer.start(100);

}

void Board::init(){
    int gridSize = 22;

    for(int x = 0; x < MAX_X; x++){
        for(int y = 0; y < MAX_Y; y++){
            QLabel *label = new QLabel(this);
            //label->setStyleSheet("background:red");
            label->setGeometry(x * gridSize, y * gridSize, gridSize, gridSize);
            label->hide();
            matrix[x][y]= new Node;
            matrix[x][y]->label =label;
            matrix[x][y]->type = NORMAL_LABEL;
            matrix[x][y]->x = x;
            matrix[x][y]->y = y;
        }
    }
}

void Board::drawBorder(){
    for(int x = 0; x < MAX_X; x++){
        for(int y = 0; y < MAX_Y; y++){
            if(x == 0 || x == MAX_X -1 || y == 0 || y == MAX_Y -1){
                matrix[x][y]->label->show();
                matrix[x][y]->type = BORDER_LABEL;
                matrix[x][y]->label->setStyleSheet("background:black");
            }
        }
    }
}

void Board::initSnake(){
    int x0 = 5, y0 = 5;
    int snakeLen = 5;
    dx = 1;
    dy = 0;
    snake.clear();
    for(int x = x0; x < x0 + snakeLen; x++){

        snake.append(matrix[x][y0]);
        snake.at(snake.length() - 1)->x = x;
        snake.at(snake.length() - 1)->y = y0;
        snake.at(snake.length() - 1)->type = SNAKE_LABEL;
        snake.at(snake.length() - 1)->label->show();
    }

}

void Board::moveStep(){
    getHeadTail();
    Node *n = matrix[head->x + dx][head->y + dy];
    n->label->setStyleSheet("background:red");
    n->label->show();
    if(n->type == BORDER_LABEL || n->type == SNAKE_LABEL){
        timer.stop();
        QMessageBox::information(this, "提示", "You lose!!", QMessageBox::Ok);
    }
    else
    {
        if(n->type == FOOD_LABEL){
            n->type = SNAKE_LABEL;
            snake.append(n);
            generateFood();
        }
        else
        {
            n->type = SNAKE_LABEL;
            snake.append(n);
            tail->label->hide();
            tail->type = NORMAL_LABEL;
            snake.removeFirst();
        }
    }
}

void Board::getHeadTail(){
    head = snake.at(snake.length() - 1);
    tail = snake.at(0);
}

void Board::slotMoveStep(){
    moveStep();
}

void Board::Key(QKeyEvent *e){
    qDebug() << e->key();
    switch (e->key()) {
    case 16777235:
        if(up()){
            dy = -1;
            dx = 0;
        }
        break;
    case 16777237:
        if(down()){
            dy = 1;
            dx = 0;
        }
        break;
    case 16777234:
        if(left()){
            dx = -1;
            dy = 0;
        }
        break;
    case 16777236:
        if(right()){
            dx = 1;
            dy = 0;
        }
        break;
    default:
        break;;
    }
}

void Board::generateFood(){
    int food_x,food_y;
    srand((unsigned)time(0));
    do{
        food_x = rand()%MAX_X;
        food_y = rand()%MAX_Y;
    }while(matrix[food_x][food_y]->type != NORMAL_LABEL);
    matrix[food_x][food_y]->type = FOOD_LABEL;
    matrix[food_x][food_y]->label->setStyleSheet("background:blue");
    matrix[food_x][food_y]->label->show();

}

bool Board::left(){
    if(dy == 0){
        return false;
    }
    return true;
}

bool Board::right(){
    if(dy == 0){
        return false;
    }
    return true;
}

bool Board::up(){
    if(dx == 0){
        return false;
    }
    return true;
}

bool Board::down(){
    if(dx == 0){
        return false;
    }
    return true;
}
