#include "reinf.h"
#include "ui_reinf.h"
#include <QPainter>
#include <QDebug>
#include <iostream>
#include <algorithm>

Reinf::Reinf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reinf)
{
    ui->setupUi(this);
    resize(800,500);
    setWindowTitle("网格世界");
    vs.resize(5);

    q_sa.resize(5);
    for(auto &it : q_sa)//这里要不是引用，就是在调整副本
       it.resize(6);

    pi_sa.resize(5);
    for(auto &it : pi_sa)//这里要不是引用，就是在调整副本
       it.resize(6);

    //one_turn();
    connect(ui->pB_oneturn,&QPushButton::clicked,this,&Reinf::one_turn);

}
void Reinf::one_turn(){
    comp_qa();//计算qa
    comp_pi_sa();
    comp_vs();
    qDebug()<<vs;

}

void Reinf::comp_vs(){
    for(auto it1 = pi_sa.cbegin()+1;it1!=pi_sa.cend();++it1){
       for(auto it2 = it1->cbegin()+1;it2!=it1->cend();++it2){
           if((*it2)==1){//找到策略是1的那个位置
               vs[it1-pi_sa.begin()]=q_sa[it1-pi_sa.begin()][it2 - it1->begin()];
               //qDebug()<<vs[it1-pi_sa.begin()];
               continue;
           }
       }
    }

}

void Reinf::comp_pi_sa(){
    for(auto it1 = q_sa.cbegin()+1; it1!=q_sa.cend(); ++it1){//遍历状态s1,s2,s3,s4
       auto max_it = std::max_element(it1->begin()+1, it1->end());//找到最大的策略
       pi_sa[it1-q_sa.begin()].assign(6,0);//全都变成0
       pi_sa[it1-q_sa.begin()][max_it - it1->begin()] = 1;//最大的位置变成1
       //qDebug()<<pi_sa[it1-q_sa.begin()];
    }
}
void Reinf::comp_qa(){
//q_sa[1][1]第一个括号代表s，第二个括号代表a
    q_sa[1][1]= -1 + gamma * vs[1];
    q_sa[1][2]= -1 + gamma * vs[2];
    q_sa[1][3]=  0 + gamma * vs[3];
    q_sa[1][4]= -1 + gamma * vs[1];
    q_sa[1][5]=  0 + gamma * vs[1];

    q_sa[2][1]= -1 + gamma * vs[2];
    q_sa[2][2]= -1 + gamma * vs[2];
    q_sa[2][3]=  1 + gamma * vs[4];
    q_sa[2][4]=  0 + gamma * vs[1];
    q_sa[2][5]= -1 + gamma * vs[2];

    q_sa[3][1]=  0 + gamma * vs[1];
    q_sa[3][2]=  1 + gamma * vs[4];
    q_sa[3][3]= -1 + gamma * vs[3];
    q_sa[3][4]= -1 + gamma * vs[3];
    q_sa[3][5]=  0 + gamma * vs[3];

    q_sa[4][1]= -1 + gamma * vs[3];
    q_sa[4][2]= -1 + gamma * vs[4];
    q_sa[4][3]= -1 + gamma * vs[4];
    q_sa[4][4]=  0 + gamma * vs[3];
    q_sa[4][5]=  1 + gamma * vs[4];
}

void Reinf::paintEvent(QPaintEvent *even){
    QPainter *painter = new QPainter(this);

    painter->setPen(Qt::black);
    painter->drawRect(30,30,400,400);
    painter->drawLine(30,230,430,230);//水平分割线
    painter->drawLine(230,30,230,430);//竖直分割线

    painter->setBrush(Qt::yellow);//-1点
    painter->drawRect(230,30,200,200);
    painter->setBrush(Qt::green);//终点
    painter->drawRect(230,230,200,200);

    QFont font("Arial", 20); // 设置字体为 Arial 24 号
    painter->setFont(font);
    painter->drawText(130-10,130+10,"s1");
    painter->drawText(330-10,130+10,"s2");
    painter->drawText(130-10,330+10,"s3");
    painter->drawText(330-10,330+10,"s4");
    painter->end();

}
Reinf::~Reinf()
{
    delete ui;
}
