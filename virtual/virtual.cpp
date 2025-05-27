#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;
    int age;
    bool gender;
public:
    Animal() : name(" "), age(0), gender(0) { }
    Animal(string name, int age, bool gender) : name(name), age(age), gender(gender) { }
    // 虚函数
    virtual void Walk()
    {
        cout << "The animal is walking." << endl;
    }
    ~Animal() { }
};

class Dog: public Animal
{
private:
public:
    Dog(string name, int age, bool gender) : Animal(name, age, gender) { }
    // 虚函数的重写
    void Walk() override
    {
        cout << "The " << name << " is walking." << endl;
    }
};

int main()
{
    Dog LaoBiao = Dog("LaoBiao", 4, 1);
    // 调用重写的函数
    LaoBiao.Walk();
    // 调用重写前的函数
    LaoBiao.Animal::Walk();
    return 0;
}