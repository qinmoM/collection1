#include "template.h"

// 模板类函数的的类外实现
template<class T>
Animal<T>::Animal(T x) : x(x) { }
template<class T>
void Animal<T>::print()
{
    std::cout << x << std::endl;
}