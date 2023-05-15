#include "widget.h"
#include "./ui_widget.h"
#include "calculator.h"
#include <QDebug>




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(600,400);
    calculator *calor = new calculator();

    connect(ui->calcul_Button,&QPushButton::clicked,calor,&QWidget::show);


}

Widget::~Widget()
{
    delete ui;
}

