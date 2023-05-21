/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *calcul_Button;
    QPushButton *calcul_Button_2;
    QPushButton *calcul_Button_3;
    QPushButton *reinf_Button;
    QPushButton *calcul_Button_5;
    QPushButton *calcul_Button_6;
    QPushButton *calcul_Button_7;
    QPushButton *calcul_Button_8;
    QPushButton *calcul_Button_9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setEnabled(true);
        Widget->resize(600, 400);
        calcul_Button = new QPushButton(Widget);
        calcul_Button->setObjectName("calcul_Button");
        calcul_Button->setGeometry(QRect(60, 150, 141, 111));
        QFont font;
        font.setPointSize(18);
        calcul_Button->setFont(font);
        calcul_Button_2 = new QPushButton(Widget);
        calcul_Button_2->setObjectName("calcul_Button_2");
        calcul_Button_2->setGeometry(QRect(220, 150, 141, 111));
        calcul_Button_2->setFont(font);
        calcul_Button_3 = new QPushButton(Widget);
        calcul_Button_3->setObjectName("calcul_Button_3");
        calcul_Button_3->setGeometry(QRect(380, 150, 141, 111));
        calcul_Button_3->setFont(font);
        reinf_Button = new QPushButton(Widget);
        reinf_Button->setObjectName("reinf_Button");
        reinf_Button->setGeometry(QRect(60, 280, 141, 111));
        reinf_Button->setFont(font);
        calcul_Button_5 = new QPushButton(Widget);
        calcul_Button_5->setObjectName("calcul_Button_5");
        calcul_Button_5->setGeometry(QRect(220, 280, 141, 111));
        calcul_Button_5->setFont(font);
        calcul_Button_6 = new QPushButton(Widget);
        calcul_Button_6->setObjectName("calcul_Button_6");
        calcul_Button_6->setGeometry(QRect(380, 280, 141, 111));
        calcul_Button_6->setFont(font);
        calcul_Button_7 = new QPushButton(Widget);
        calcul_Button_7->setObjectName("calcul_Button_7");
        calcul_Button_7->setGeometry(QRect(380, 20, 141, 111));
        calcul_Button_7->setFont(font);
        calcul_Button_8 = new QPushButton(Widget);
        calcul_Button_8->setObjectName("calcul_Button_8");
        calcul_Button_8->setGeometry(QRect(220, 20, 141, 111));
        calcul_Button_8->setFont(font);
        calcul_Button_9 = new QPushButton(Widget);
        calcul_Button_9->setObjectName("calcul_Button_9");
        calcul_Button_9->setGeometry(QRect(60, 20, 141, 111));
        calcul_Button_9->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        calcul_Button->setText(QCoreApplication::translate("Widget", "\351\253\230\347\272\247\350\256\241\347\256\227\345\231\250", nullptr));
        calcul_Button_2->setText(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\344\272\214\344\271\230\346\263\225", nullptr));
        calcul_Button_3->setText(QCoreApplication::translate("Widget", "G2O", nullptr));
        reinf_Button->setText(QCoreApplication::translate("Widget", "\345\274\272\345\214\226\345\255\246\344\271\240", nullptr));
        calcul_Button_5->setText(QCoreApplication::translate("Widget", "\346\273\244\346\263\242\345\231\250", nullptr));
        calcul_Button_6->setText(QCoreApplication::translate("Widget", "PID", nullptr));
        calcul_Button_7->setText(QCoreApplication::translate("Widget", "MPC", nullptr));
        calcul_Button_8->setText(QCoreApplication::translate("Widget", "\345\215\225\350\257\215", nullptr));
        calcul_Button_9->setText(QCoreApplication::translate("Widget", "\350\213\261\350\257\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
