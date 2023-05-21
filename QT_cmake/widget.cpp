#include "widget.h"
#include "./ui_widget.h"
#include "calculator.h"
#include <QDebug>
#include "reinf.h"




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(600,400);
    calculator *calor = new calculator();
    Reinf *reinfor = new Reinf();

    connect(ui->calcul_Button,&QPushButton::clicked,calor,&QWidget::show);
    connect(ui->reinf_Button,&QPushButton::clicked,reinfor,&QWidget::show);

}

Widget::~Widget()
{
    delete ui;
}

