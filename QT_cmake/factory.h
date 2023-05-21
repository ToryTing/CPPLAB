#ifndef FACTORY_H
#define FACTORY_H
#include <map>
#include <string>
#include <functional>
#include <memory>
#include "operator.h"


#define REGESTER(T,key) Factory::Registerclass<T> reg_##T(key);
class Factory
{
public:
    template<typename T>
    class Registerclass{//这个类不可以写成一个函数的形式吗？
    public:
        Registerclass(std::string opr) {
        //构造函数，用于对每个运算符号的第一次创建 也就是define的时候
            Factory::map_operator.emplace(opr, [](){return std::make_shared<T>();});
        //map对象的键是opr，值是可调用函数对象，这个函数对象返回的是一个指向T类型的指针，函数没有参数
        //对应下面的std::function<std::shared_ptr<Operator>()> 是一个返回T类型父类的 function
        }
    };

    static std::shared_ptr<Operator> create(std::string c){
        //遍历表达式的时候，运算符入栈前，找到这个符号的最开始创建的对象的指针
        auto it = map_operator.find(c);
        if(it!=map_operator.end())
            return it->second();//这个()相当于执行了上面的lambda表达式，因此返回类型为std::shared_ptr<Operator>
        else
            throw std::string("matching mistake in map_operator!");//抛出异常
    }


    static std::map<std::string, std::function<std::shared_ptr<Operator>()> > map_operator;
};

#endif // FACTORY_H
