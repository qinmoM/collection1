#include <iostream>

using namespace std;

// 类外实现友元的模板函数
// 1. 声明模板函数
template<class T, class T1>
class Class;

// 类外实现友元的模板函数
// 2. 实现函数
template<class T, class T1>
void print2(const Class<T, T1>& c)
{
    cout << c.x << endl;
}

template<class T, class T1>
class Class
{
private:
    T x;
public:
    Class() : x(0) { }
    Class(T x) : x(x) { }
    // 类内实现一个友元的模板函数
    friend void print(const Class<T, T1>& c)
    {
        cout << c.x << endl;
    }
    // 类外实现友元的模板函数
    // 3. 类内声明
    friend void print2<>(const Class<T, T1>& c);
};

int main()
{
    Class<int, int> c1;
    cout << "你好" << endl;
    // 调用类内的友元函数
    print(c1);
    // 调用类外的友元函数
    print2(c1);
    return 0;
}