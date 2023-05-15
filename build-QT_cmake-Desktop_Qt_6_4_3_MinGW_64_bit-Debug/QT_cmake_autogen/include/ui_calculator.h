/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QPushButton *Pause_1;
    QTextEdit *textEdit_1;
    QTextEdit *textEdit_2;
    QPushButton *Pause_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_10;
    QPushButton *pushButton_del;
    QPushButton *pushButton_eql;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(820, 480);
        Pause_1 = new QPushButton(calculator);
        Pause_1->setObjectName("Pause_1");
        Pause_1->setGeometry(QRect(90, 420, 61, 51));
        QFont font;
        font.setPointSize(12);
        Pause_1->setFont(font);
        textEdit_1 = new QTextEdit(calculator);
        textEdit_1->setObjectName("textEdit_1");
        textEdit_1->setGeometry(QRect(20, 60, 211, 351));
        textEdit_2 = new QTextEdit(calculator);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(250, 60, 211, 351));
        Pause_2 = new QPushButton(calculator);
        Pause_2->setObjectName("Pause_2");
        Pause_2->setGeometry(QRect(320, 420, 61, 51));
        Pause_2->setFont(font);
        pushButton_1 = new QPushButton(calculator);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(490, 60, 51, 51));
        QFont font1;
        font1.setPointSize(15);
        pushButton_1->setFont(font1);
        pushButton_2 = new QPushButton(calculator);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 60, 51, 51));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(calculator);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(650, 60, 51, 51));
        pushButton_3->setFont(font1);
        pushButton_5 = new QPushButton(calculator);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(570, 130, 51, 51));
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(calculator);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(650, 130, 51, 51));
        pushButton_6->setFont(font1);
        pushButton_4 = new QPushButton(calculator);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 130, 51, 51));
        pushButton_4->setFont(font1);
        pushButton_8 = new QPushButton(calculator);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(570, 200, 51, 51));
        pushButton_8->setFont(font1);
        pushButton_9 = new QPushButton(calculator);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(650, 200, 51, 51));
        pushButton_9->setFont(font1);
        pushButton_7 = new QPushButton(calculator);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(490, 200, 51, 51));
        pushButton_7->setFont(font1);
        pushButton_0 = new QPushButton(calculator);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(570, 270, 51, 51));
        pushButton_0->setFont(font1);
        pushButton_point = new QPushButton(calculator);
        pushButton_point->setObjectName("pushButton_point");
        pushButton_point->setGeometry(QRect(650, 270, 51, 51));
        pushButton_point->setFont(font1);
        pushButton_10 = new QPushButton(calculator);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(490, 270, 51, 51));
        pushButton_10->setFont(font1);
        pushButton_del = new QPushButton(calculator);
        pushButton_del->setObjectName("pushButton_del");
        pushButton_del->setGeometry(QRect(490, 340, 111, 51));
        pushButton_del->setFont(font1);
        pushButton_eql = new QPushButton(calculator);
        pushButton_eql->setObjectName("pushButton_eql");
        pushButton_eql->setGeometry(QRect(630, 340, 71, 51));
        pushButton_eql->setFont(font1);
        pushButton_11 = new QPushButton(calculator);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(730, 60, 51, 51));
        pushButton_11->setFont(font1);
        pushButton_12 = new QPushButton(calculator);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(730, 130, 51, 51));
        pushButton_12->setFont(font1);
        pushButton_13 = new QPushButton(calculator);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(730, 200, 51, 51));
        pushButton_13->setFont(font1);
        pushButton_14 = new QPushButton(calculator);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(730, 270, 51, 51));
        pushButton_14->setFont(font1);
        pushButton_15 = new QPushButton(calculator);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(730, 340, 51, 51));
        pushButton_15->setFont(font1);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "Form", nullptr));
        Pause_1->setText(QCoreApplication::translate("calculator", "Pause", nullptr));
        Pause_2->setText(QCoreApplication::translate("calculator", "Pause", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("calculator", ".", nullptr));
        pushButton_10->setText(QCoreApplication::translate("calculator", "10", nullptr));
        pushButton_del->setText(QCoreApplication::translate("calculator", "Del", nullptr));
        pushButton_eql->setText(QCoreApplication::translate("calculator", "=", nullptr));
        pushButton_11->setText(QCoreApplication::translate("calculator", "*", nullptr));
        pushButton_12->setText(QCoreApplication::translate("calculator", "/", nullptr));
        pushButton_13->setText(QCoreApplication::translate("calculator", "+", nullptr));
        pushButton_14->setText(QCoreApplication::translate("calculator", "-", nullptr));
        pushButton_15->setText(QCoreApplication::translate("calculator", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
