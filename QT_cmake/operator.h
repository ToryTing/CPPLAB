#ifndef OPERATOR_H
#define OPERATOR_H
#include <cmath>
#include <string>

class Operator
{
    //这是一个运算符的基类，包含运算符优先级，运算符符号，返回运算符信息等变量和函数
    //其他运算符 继承 这个基类

public:
    Operator();
    Operator(std::string sym, int pre) : O_symble(sym), O_precedence(pre){}//构造函数，子类调用
    int get_precedence() const {return O_precedence;}
    std::string get_symble() const {return O_symble;}
    virtual double get_answer(double a, double b) const = 0;
    virtual ~Operator(){}
protected:
    int O_precedence;
    std::string O_symble;
};

class O_plus : public Operator{
public:
    O_plus() : Operator("+", 1){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return a+b;
    }

};
class O_minus : public Operator{
public:
    O_minus() : Operator("-", 1){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return b-a;
    }

};
class O_multiply : public Operator{
public:
    O_multiply() : Operator("*", 2){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return a*b;
    }

};
class O_division : public Operator{
public:
    O_division() : Operator("/", 2){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return b/a;
    }

};
class O_left : public Operator{
public:
    O_left() : Operator("(", 0){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return 0;
    }

};
class O_right : public Operator{
public:
    O_right() : Operator(")", 0){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return 0;
    }

};
class O_index : public Operator{
public:
    O_index() : Operator("^", 3){}//在初始化列表中 调用父类的构造函数
    double get_answer(double a, double b) const override{
        return std::pow(b,a);
    }

};







#endif // OPERATOR_H
