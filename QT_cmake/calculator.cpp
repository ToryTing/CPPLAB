#include "calculator.h"
#include "ui_calculator.h"
#include <QString>
#include <QDebug>
#include <QKeyEvent>
#include <QTextCursor>
#include <QTextEdit>

calculator::calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
    ui->textEdit_1->setReadOnly(true);

    this->setFixedSize(820,480);
    QPushButton *buttons[11] = {ui->pushButton_0, ui->pushButton_1,\
                                ui->pushButton_2, ui->pushButton_3,\
                                ui->pushButton_4, ui->pushButton_5,\
                                ui->pushButton_6, ui->pushButton_7,\
                                ui->pushButton_8, ui->pushButton_9,\
                                ui->pushButton_10 };
    for (int i = 0; i <= 10; i++) {
        //连接按钮的 按下信号 与 文本框显示
        QString num = QString::number(i);
        connect(buttons[i],&QPushButton::clicked,ui->textEdit_1,[=](){
            ui->textEdit_2->insertPlainText(num);
        });
    }
    setFocusPolicy(Qt::StrongFocus);//widget accepts keyboard focus by tabbing and clicking
    //只有接受焦点的控件才能接收到相应的输入事件

    //获取编辑框中的光标
    QTextCursor cursor_1 = ui->textEdit_2->textCursor();

    //连接删除按钮 与 文本框删除
    connect(ui->pushButton_del,&QPushButton::clicked,ui->textEdit_2,[=]()mutable{
        cursor_1.deletePreviousChar();
    });


}
void calculator::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Up)
    {
        qDebug()<<"upup";
    }
}

calculator::~calculator()
{
    delete ui;
}
