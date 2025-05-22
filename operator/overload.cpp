#include <iostream>

using namespace std;

class Class
{
private:
    int i = 2, j = 8;
public:
    friend ostream& operator<<(ostream&, const Class& p);
    int x, y;
    Class(int x, int y) : x(x), y(y) { }
    void print()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
    Class operator--()
    {
        x -= 1;
        y -= 1;
        return Class( x, y );
    }
};

// ostream& operator<<(ostream& os, const Class& p)
// {
//     os << "x = " << p.x << ", y = " << p.y;
//     return os;
// }

ostream& operator<<(ostream& os, const Class& p)
{
    os << "i = " << p.i << ", j = " << p.j << endl;
    return os;
}

Class operator+(const Class C1, const Class C2)
{
    return { C1.x + C2.x, C1.y + C2.y };
}

Class operator++(Class& c)
{
    c.x += 1;
    c.y += 1;
    return Class( c.x, c.y );
}

Class operator++(Class& c, int)
{
    Class tmp = c;
    c.x += 1;
    c.y += 1;
    return tmp;
}

int main()
{
    Class c1 = Class(1, 22);
    Class c2 = c1;
    Class c3 = c1 + c2;
    Class c4 = c1, c5 = c1, c6 = c1;
    cout << "x = " << c3.x << ", y = " << c3.y << endl;
    c4++.print();
    cout << "x = " << c4.x << ", y = " << c4.y << endl;
    (++c5).print();
    cout << "x = " << c5.x << ", y = " << c5.y << endl;
    (--c6).print();
    cout << "x = " << c6.x << ", y = " << c6.y << endl;
    cout << c6 << endl;
    return 0;
}