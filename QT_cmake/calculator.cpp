#include "calculator.h"
#include "ui_calculator.h"
#include <QString>
#include <QDebug>
#include <QKeyEvent>
#include <QTextCursor>
#include <QTextEdit>
#include "operator.h"
#include <memory>
#include "factory.h"

calculator::calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculator)
{
    REGESTER(O_plus,"+")
    REGESTER(O_minus,"-")
    REGESTER(O_multiply,"*")
    REGESTER(O_division,"/")
    REGESTER(O_left,"(")
    REGESTER(O_right,")")
    REGESTER(O_index,"^")

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

    //连接等于号 和 计算函数
    connect(ui->pushButton_eql,&QPushButton::clicked,this,&calculator::Botton_equal);
    connect(ui->pushButton_plus,&QPushButton::clicked,this,&calculator::Botton_plus);
    connect(ui->pushButton_minus,&QPushButton::clicked,this,&calculator::Botton_minus);
    connect(ui->pushButton_multiply,&QPushButton::clicked,this,&calculator::Botton_multiply);
    connect(ui->pushButton_division,&QPushButton::clicked,this,&calculator::Botton_division);
    connect(ui->pushButton_leftq,&QPushButton::clicked,this,&calculator::Botton_leftq);
    connect(ui->pushButton_rightq,&QPushButton::clicked,this,&calculator::Botton_rightq);
    connect(ui->pushButton_bothq,&QPushButton::clicked,this,&calculator::Botton_bothq);
    connect(ui->pushButton_index,&QPushButton::clicked,this,&calculator::Botton_index);

}


void calculator::Botton_equal(){

    std::string str = ui->textEdit_2->toPlainText().toStdString();
    for(char c : str){
        //遍历字符串 判断是不是数字，然后分别入栈
        if(calculator::isNum(c))//数字直接入栈，不需要废话
            calculator::num_stack.push(c-'0');
            //qDebug()<<*it;
        else{
            std::shared_ptr<Operator> opr;
            try {
                opr = Factory::create(std::string(1,c));
                if(calculator::opr_stack.size()==0 || opr->get_symble()=="(")
                    calculator::opr_stack.push(opr);
                else{
                    if(opr->get_precedence()>calculator::opr_stack.top()->get_precedence())
                        calculator::opr_stack.push(opr);
                    else{
                        if(opr->get_symble()!=")"){
                            while(opr_stack.size()!=0&&opr->get_precedence()<=opr_stack.top()->get_precedence()&&opr_stack.top()->get_symble()!="("){
                                    comp();
                            }
                            calculator::opr_stack.push(opr);
                        }
                        else{//是右括号
                            while(calculator::opr_stack.top()->get_symble()!="("){
                                   comp();
                            }
                            calculator::opr_stack.pop();//弹出左括号
                        }
                    }
                }
            } catch (std::string e) {
            qDebug()<<QString::fromStdString(e);
            }
        }
    }

    while(opr_stack.size()!=0){
            comp();
    }

    ui->textEdit_1->insertPlainText(QString::number(num_stack.top()));
    num_stack.pop();
}
void calculator::Botton_plus(){
    ui->textEdit_2->insertPlainText("+");
}
void calculator::Botton_minus(){
    ui->textEdit_2->insertPlainText("-");
}
void calculator::Botton_multiply(){
    ui->textEdit_2->insertPlainText("*");
}
void calculator::Botton_division(){
    ui->textEdit_2->insertPlainText("/");
}
void calculator::Botton_leftq(){
    ui->textEdit_2->insertPlainText("(");
}
void calculator::Botton_rightq(){
    ui->textEdit_2->insertPlainText(")");
}
void calculator::Botton_bothq(){
    ui->textEdit_2->insertPlainText(")");
}
void calculator::Botton_index(){
    ui->textEdit_2->insertPlainText("^");
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
