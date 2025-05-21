#include <iostream>

using namespace std;

class Class1;

// 友元函数的类
class Class2
{
private:
public:
    void function2(Class1& p);
    void function1(Class1* p);
};

class Class1
{
private:
    int age = 1;
public:
    int gender = 0;
    Class1() {}
    ~Class1() {}
    // 友元函数——声明全局函数。
    friend void Change(Class1& p);
    friend void change(Class1* p);
    // 友元函数——声明类变量函数。
    friend void Class2::function2(Class1& p);
};

void Class2::function2(Class1& p)
{
    p.age = 10;
    cout << p.age << endl;
}

void Class2::function1(Class1* p)
{
    p->gender = 1;
    cout << p->gender << endl;
}

// 声明为友元函数的函数可以修改类的值
// 参数为引用的
void Change(Class1& p)
{
    p.age = 9;
    cout << p.age << endl;
}
// 参数为指针的
void change(Class1* p)
{
    p->age = 10;
    cout << p->age << endl;
}

int main()
{
    Class1 c1 = Class1();
    Class2 c2 = Class2();
    Change(c1);
    change(&c1);
    c2.function2(c1);
    return 0;
}