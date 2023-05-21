#include "factory.h"

std::map<std::string, std::function<std::shared_ptr<Operator>()> > Factory::map_operator;
//这里对map_operator惊醒定义 ，Factory::不能少
