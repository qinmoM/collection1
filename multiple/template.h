#pragma once

// 模板类函数的的类外实现
// 分文件写法下的注意事项：
//      出现未包含定义的问题，有以下两种解决方法：
//          1.将实现写到.h文件
//          2.将main包含的.h换成.cpp

#include <iostream>

// 模板类
template<class T>
class Animal
{
private:
    T x;
public:
    Animal(T x);
    void print();
};