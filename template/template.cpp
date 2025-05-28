#include <iostream>

using namespace std;

// 模板类
template<class T>
class Point
{
    friend void print(Point<int>& p);
    friend void print(Point<double>& p);
private:
    T x, y;
public:
    Point(T x, T y) : x(x), y(y) { }
    T Add()
    {
        return x + y;
    }
    void print()
    {
        cout << x << y << endl;
    }
    ~Point() { }
};

// 模板类
template<typename T>
class Animal
{
public:
    T ag;
    Animal(T ag) : ag(ag) { }
};
// 普通类继承模板类
class Dog : public Animal<int>
{
public:
    int x;
    Dog(int ag, int x) : Animal<int>(ag), x(x) { }
};
// 模板类继承模板类
template<class T>
class Cat : public Animal<T>
{
public:
    T y;
    Cat(T ag, T y) : Animal<T>(ag), y(y) { }
};

// 普通函数调用模板类的对象
void print(Point<int>& p)
{
    cout << "x = " << p.x << ", y = " << p.y << endl;
}
void print(Point<double>& p)
{
    cout << "x = " << p.x << ", y = " << p.y << endl;
}

// 模板函数调用模板类
template<typename T4>
void print2(Point<T4>& p)
{
    p.print();
}

int main()
{
    Point<int> p1(1,2);
    Point<double> p2(1.2, 2.3);
    // 模板类对象的函数调用
    cout << p1.Add() << endl;
    cout << p2.Add() << endl;
    // 模板函数调用模板类的对象
    print2(p1);
    print2(p2);
    // 继承自模板类的对象和模板类的对象
    Dog xiaohei(2, 1);
    Cat<int> laobeizi(2, 3);
    return 0;
}