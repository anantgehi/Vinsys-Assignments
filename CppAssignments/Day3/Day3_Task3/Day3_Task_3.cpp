#include <iostream>
#include <math.h>
class Point
{
    int x;
    int y;

public:
    Point()
    {
        std::cout << "Point Ctor Called" << std::endl;
        x = y = 0;
    }
    Point(int x, int y)
    {
        std::cout << "Point Parameterized Ctor Called" << std::endl;
        this->x = x;
        this->y = y;
    }
    ~Point()
    {
        std::cout << "Point Dtor Called" << std::endl;
    }
    const int get_x()
    {
        return x;
    }
    const int get_y()
    {
        return y;
    }
};

class Utility
{
public:
    double static calculate_distance(Point* p1, Point* p2)
    {
        return pow(pow(p1->get_x() - p2->get_x(), 2) + pow(p1->get_y() - p2->get_y(), 2), 0.5);
    }
};

int main()
{
    Point* p1 = new Point(8, 4);
    Point* p2 = new Point(5, 8);
    std::cout << "Distance between p1 and p2 is " << Utility::calculate_distance(p1, p2) << std::endl;
    delete p1;
    delete p2;
    p1 = nullptr;
    p2 = nullptr;
}