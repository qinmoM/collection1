#include <iostream>

using namespace std;

class Class
{
private:
    int i;
    short j;
    int t;
    int* p;
    int* q;
public:
    // 三种构造函数（无参和有参）
    Class() { }
    Class(int i) : i(i) { }
    Class(int i, short j)
    {
        //参数名字与成员名字相同，需要this指针指向成员
        this->i = i;
        this->j = j;
    }
    // 拷贝构造函数
    Class(const Class* p) : t(p->t), q(new int())
    {
        this->i = p->i;
        j = p->j;
        this->p = new int();
    }
    int print()
    {
        cout << i << endl;
        return i;
    }
    // 返回对象自己的函数
    Class& Add(int x)
    {
        this->i += x;
        return *this;
    }
    // 析构函数
    ~Class()
    {

    }
};

int main()
{
    // 显示调用
    Class c1 = Class(1, 2);
    Class c2(1, 2);
    Class c3;
    // 隐式调用
    Class c4 = {};
    Class c5 = 10;
    Class c6 = {1, 4};
    // 拷贝构造函数
    Class c7 = c6;
    Class c8 = Class(c6);
    // 链式访问
    int u = c5.Add(3).Add(4).print();
    cout << u << endl;
    return 0;
}