#include <iostream>

using namespace std;

class Point;

class Sum
{
public:
    float sum(Point& p);
};

class Point
{
private:
    float x, y;
public:
    Point(int x, int y) : x(x), y(y) { }
    friend float sum(Point& p);
};

float sum(Point& p)
{
    return (p.x + p.y) * (p.x - p.y);
}

int main()
{
    Point p(10, 4);
    cout << sum(p) << endl;
    return 0;
}