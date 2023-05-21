#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QString>
#include <stack>
#include <vector>
#include "operator.h"
#include <string>
#include <memory>
namespace Ui {
class calculator;
}

class calculator : public QWidget
{
    Q_OBJECT
private:
    bool isNum(char str){return (str-'0'>=0 && str-'9'<=0) ? true:false;}
    void comp(){
        int a,b;
        std::shared_ptr<Operator> opr;
        if(num_stack.size()!=0)
            a = num_stack.top();
        else
            throw std::string("第一个操作数获取失败");
        num_stack.pop();//弹出

        if(num_stack.size()!=0)
            b = num_stack.top();
        else
            throw std::string("第二个操作数获取失败");
        num_stack.pop();//弹出

        if(opr_stack.size()!=0)
            opr = opr_stack.top();
        else
            throw std::string("运算符栈空，运算符获取失败");
        opr_stack.pop();//弹出

        auto ans = opr->get_answer(a,b);//计算

        num_stack.push(int(ans)); //结果压栈

    }//用来计算的函数 传入的是 获取到的字符串
public:
    explicit calculator(QWidget *parent = nullptr);

    ~calculator();
    void Botton_equal();
    void Botton_plus();
    void Botton_minus();
    void Botton_multiply();
    void Botton_division();
    void Botton_leftq();
    void Botton_rightq();
    void Botton_bothq();
    void Botton_index();
protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::calculator *ui;
    std::stack<int> num_stack;
    std::stack<std::shared_ptr<Operator> > opr_stack;
};

#endif // CALCULATOR_H
