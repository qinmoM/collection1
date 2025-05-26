#include <iostream>

using namespace std;

class ExpressCompany
{
public:
    ExpressCompany() { }
    virtual void SendPackage() = 0;
};

class JD: public ExpressCompany
{
public:
    void SendPackage() override
    {
        cout << "JD delivers your packages to you." << endl;
    }
};

class EMS: public ExpressCompany
{
public:
    void SendPackage() override
    {
        cout << "EMS delivers your packages to you." << endl;
    }
};

void send(ExpressCompany& p)
{
    p.SendPackage();
}

int main()
{
    JD jd = JD();

    // 父类引用绑定子类对象，通过调用父类函数来指向子类函数实现
    // ExpressCompany& company = jd;
    // company.SendPackage();

    // 函数实现：
    send(*(new EMS()));
    send(jd);
    return 0;
}