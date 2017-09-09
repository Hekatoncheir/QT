#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QScrollBar>
#include<QFileDialog>
#include<QColorDialog>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(850,550);
    ui->textEdit->setFocusPolicy(Qt::StrongFocus);
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);

    ui->textEdit->setFocus();
    ui->textEdit->installEventFilter(this);

    udpSocket = new QUdpSocket(this);
    port = 45454;
    udpSocket->bind(port,QUdpSocket::ShareAddress
                                    | QUdpSocket::ReuseAddressHint);
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(processPendingDatagrams()));
    sendMessage(NewParticipant);

    server = new TcpServer(this);
    connect(server,SIGNAL(sendFileName(QString)),this,SLOT(sentFileName(QString)));
    connect(ui->textEdit,SIGNAL(currentCharFormatChanged(QTextCharFormat)),this,SLOT(currentFormatChanged(const QTextCharFormat)));
}

void Widget::currentFormatChanged(const QTextCharFormat &format)
{
    ui->fontComboBox->setCurrentFont(format.font());

    if(format.fontPointSize()<9)
        ui->fontsizecomboBox->setCurrentIndex(3);
    else ui->fontsizecomboBox->setCurrentIndex(
            ui->fontsizecomboBox->findText(QString::number(format.fontPointSize())));

    color = format.foreground().color();
}

void Widget::processPendingDatagrams()   //接收数据UDP
{
    while(udpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(),datagram.size());
        QDataStream in(&datagram,QIODevice::ReadOnly);
        int messageType;
        in >> messageType;
        QString userName,localHostName,ipAddress,message;
        QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        switch(messageType)
        {
            case Message:
                {
                    in >>userName >>localHostName >>ipAddress >>message;
                    ui->textBrowser->setTextColor(Qt::black);
                    ui->textBrowser->setCurrentFont(QFont("Times New Roman",12));
                    ui->textBrowser->append("[ " +userName+" ] "+ time);
                    ui->textBrowser->append(message);
                    break;
                }
            case NewParticipant:
                {
                    in >>userName >>localHostName >>ipAddress;
                    newParticipant(userName,localHostName,ipAddress);

                    break;
                }
            case ParticipantLeft:
                {
                    in >>userName >>localHostName;
                    participantLeft(userName,localHostName,time);
                    break;
                }
        case FileName:
            {
                in >>userName >>localHostName >> ipAddress;
                QString clientAddress,fileName;
                in >> clientAddress >> fileName;
                hasPendingFile(userName,ipAddress,clientAddress,fileName);
                break;
            }
        case Refuse:
            {
                in >> userName >> localHostName;
                QString serverAddress;
                in >> serverAddress;            
                QString ipAddress = getIP();

                if(ipAddress == serverAddress)
                {
                    server->refused();
                }
                break;
            }
        }
    }
}


void Widget::newParticipant(QString userName,QString localHostName,QString ipAddress)//处理新用户加入
{
    bool bb = ui->tableWidget->findItems(localHostName,Qt::MatchExactly).isEmpty();
    if(bb)
    {
        QTableWidgetItem *user = new QTableWidgetItem(userName);
        QTableWidgetItem *host = new QTableWidgetItem(localHostName);
        QTableWidgetItem *ip = new QTableWidgetItem(ipAddress);
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,user);
        ui->tableWidget->setItem(0,1,host);
        ui->tableWidget->setItem(0,2,ip);
        ui->textBrowser->setTextColor(Qt::gray);
        ui->textBrowser->setCurrentFont(QFont("Times New Roman",10));
        ui->textBrowser->append(tr("%1 online").arg(userName));
        sendMessage(NewParticipant);
    }
}


void Widget::participantLeft(QString userName,QString localHostName,QString time)//处理用户离开
{
    int rowNum = ui->tableWidget->findItems(localHostName,Qt::MatchExactly).first()->row();
    ui->tableWidget->removeRow(rowNum);
    ui->textBrowser->setTextColor(Qt::gray);
    ui->textBrowser->setCurrentFont(QFont("Times New Roman",10));
    ui->textBrowser->append(tr("%1 %2 off line").arg(userName).arg(time));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QString Widget::getIP()  //获取ip地址
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       if(address.protocol() == QAbstractSocket::IPv4Protocol) //IPv4
            return address.toString();
    }
       return 0;
}

void Widget::sendMessage(MessageType type, QString serverAddress)  //发送信息
{
    QByteArray data;
    QDataStream out(&data,QIODevice::WriteOnly);
    QString localHostName = QHostInfo::localHostName();
    QString address = getIP();
    out << type << getUserName() << localHostName;


    switch(type)
    {
        case ParticipantLeft:
            {
                break;
            }
        case NewParticipant:
            {         
                out << address;
                break;
            }

        case Message :
            {
                if(ui->textEdit->toPlainText() == "")
                {
                    QMessageBox::warning(0,tr("Warning"),tr("Send content can't be empty"),QMessageBox::Ok);
                    return;
                }
               out << address << getMessage();
               ui->textBrowser->verticalScrollBar()->setValue(ui->textBrowser->verticalScrollBar()->maximum());
               break;

            }
        case FileName:
            {
                int row = ui->tableWidget->currentRow();
                QString clientAddress = ui->tableWidget->item(row,2)->text();
                out << address << clientAddress << fileName;
                break;
            }
        case Refuse:
            {
                out << serverAddress;
                break;
            }
    }
    udpSocket->writeDatagram(data,data.length(),QHostAddress::Broadcast, port);

}

QString Widget::getUserName()  //获取用户名
{
    QStringList envVariables;
    envVariables << "USERNAME.*" << "USER.*" << "USERDOMAIN.*"
                 << "HOSTNAME.*" << "DOMAINNAME.*";
    QStringList environment = QProcess::systemEnvironment();
    foreach (QString string, envVariables)
    {
        int index = environment.indexOf(QRegExp(string));
        if (index != -1)
        {

            QStringList stringList = environment.at(index).split('=');
            if (stringList.size() == 2)
            {
                return stringList.at(1);
                break;
            }
        }
    }
    return false;
}

QString Widget::getMessage()  //获得要发送的信息
{
    QString msg = ui->textEdit->toHtml();

    ui->textEdit->clear();
    ui->textEdit->setFocus();
    return msg;
}

void Widget::closeEvent(QCloseEvent *)
{
    sendMessage(ParticipantLeft);
}

void Widget::sentFileName(QString fileName)
{
    this->fileName = fileName;
    sendMessage(FileName);
}

void Widget::hasPendingFile(QString userName,QString serverAddress,  //接收文件
                            QString clientAddress,QString fileName)
{
    QString ipAddress = getIP();
    if(ipAddress == clientAddress)
    {
        int btn = QMessageBox::information(this,tr("receive file"),
                                 tr("From%1(%2):%3,receive?")
                                 .arg(userName).arg(serverAddress).arg(fileName),
                                 QMessageBox::Yes,QMessageBox::No);
        if(btn == QMessageBox::Yes)
        {
            QString name = QFileDialog::getSaveFileName(0,tr("save"),fileName);
            if(!name.isEmpty())
            {
                TcpClient *client = new TcpClient(this);
                client->setFileName(name);
                client->setHostAddress(QHostAddress(serverAddress));
                client->show();

            }

        }
        else{
            sendMessage(Refuse,serverAddress);
        }
    }
}

void Widget::on_send_clicked()//发送
{
    sendMessage(Message);
}

void Widget::on_sendfile_clicked()
{
    if(ui->tableWidget->selectedItems().isEmpty())
    {
        QMessageBox::warning(0,tr("Choice"),tr("Choice the people online!"),QMessageBox::Ok);
        return;
    }
    server->show();
    server->initServer();
}

void Widget::on_close_clicked()//关闭
{
    this->close();
}

bool Widget::eventFilter(QObject *target, QEvent *event)
{
    if(target == ui->textEdit)
    {
        if(event->type() == QEvent::KeyPress)
        {
             QKeyEvent *k = static_cast<QKeyEvent *>(event);
             if(k->key() == Qt::Key_Return)
             {
                 on_send_clicked();
                 return true;
             }
        }
    }
    return QWidget::eventFilter(target,event);
}

void Widget::on_fontComboBox_currentFontChanged(QFont f)//字体设置
{
    ui->textEdit->setCurrentFont(f);
    ui->textEdit->setFocus();
}

void Widget::on_fontsizecomboBox_currentIndexChanged(QString size)
{
   ui->textEdit->setFontPointSize(size.toDouble());
   ui->textEdit->setFocus();
}


void Widget::on_textcolor_clicked()
{
    color = QColorDialog::getColor(color,this);
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
        ui->textEdit->setFocus();
    }
}

void Widget::on_save_clicked()//保存聊天记录
{
    if(ui->textBrowser->document()->isEmpty())
        QMessageBox::warning(0,tr("Waring"),tr("Can't save it!"),QMessageBox::Ok);
    else
    {
       //获得文件名
       QString fileName = QFileDialog::getSaveFileName(this,tr("Save records"),tr("chatting records"),tr("text(*.txt);;All File(*.*)"));
       if(!fileName.isEmpty())
           saveFile(fileName);
    }
}

bool Widget::saveFile(const QString &fileName)//保存文件
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text))

    {
        QMessageBox::warning(this,tr("Save"),
        tr("Can't save %1:\n %2").arg(fileName)
        .arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    out << ui->textBrowser->toPlainText();

    return true;
}

void Widget::on_clear_clicked()//清空聊天记录
{
    ui->textBrowser->clear();
}
