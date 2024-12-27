#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend class Distance;

public:
    // Point(int a, int b)
    // {
    //     x = a;
    //     y = b;
    // }
    Point(int a, int b) : x(a), y(b) {}


    void PrintPoint(void)
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class Distance
{
    public:
    double PointDistance(Point p1, Point p2)
    {
        return (sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
    }
};

int main()
{
    Point p1(1, 1);
    Point p2(2, 2);
    p1.PrintPoint();
    p2.PrintPoint();

    Distance d1;
    cout << d1.PointDistance(p1, p2);
    return 0;
}