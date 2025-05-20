#include <iostream>

using namespace std;

// class Class1
// {
// private:   
//     int i;
//     int j;
//     int* u;
// public:
//     Class1() : i(-1), j(-1) { }
//     Class1(int i, int j, int* u) : i(i), j(j)
//     {
//         u = new int(1);
//     }
//     ~Class1()
//     {
//         delete u;
//     }
// };

class Class2
{
private:
    int i;
    int j;
public:
    int score;
    // mutable修饰的公共属性可以被常函数修改
    mutable int gender;
    // 构造函数
    Class2() : i(-2), j(-2) { }
    Class2(int i, int j, int gender) : i(i), j(j), gender(gender) { }
    // 复制构造
    Class2(const Class2& p) : i(p.i), j(p.j) { }
    void w()
    {
        cout << "The world" << endl;
    }
    // const修饰常函数的两种写法
    // 常函数：不可修改属性，只能访问；只能调用常函数
    void r() const
    {
        gender = 1;
        e();
    }
    void e() const
    {
        cout << "Explosion" << endl;
    }
    // 返回值为常数的函数
    const void o()
    {
        r();
        w();
    }
    ~Class2() { }
};

int main()
{
    //Class1 c1 = Class1();
    Class2 c2 = Class2(1, 2, 0);
    c2.w();
    // 常对象只可访问常函数
    const Class2 c3 = Class2(c2);
    c3.r();
    cout << c3.gender << endl;
    return 0;
}