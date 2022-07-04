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

class Triangle
{
    Point* p1;
    Point* p2;
    Point* p3;

public:
    Triangle()
    {
        int p_x;
        int p_y;
        std::cout << "Triangle Ctor Called" << std::endl;
        std::cout << "Enter co-ordinates of p1 x , y : ";
        std::cin >> p_x >> p_y;
        p1 = new Point(p_x, p_y);
        std::cout << "Enter co-ordinates of p2 x , y : ";
        std::cin >> p_x >> p_y;
        p2 = new Point(p_x, p_y);
        std::cout << "Enter co-ordinates of p3 x , y : ";
        std::cin >> p_x >> p_y;
        p3 = new Point(p_x, p_y);
    }
    ~Triangle()
    {
        std::cout << "Triangle Dtor Called" << std::endl;
        delete p1;
        delete p2;
        delete p3;
        p1 = nullptr;
        p2 = nullptr;
        p3 = nullptr;
    }
    double perimeter()
    {
        return Utility::calculate_distance(p1, p2) + Utility::calculate_distance(p1, p3) + Utility::calculate_distance(p2, p3);
    }
};

int main()
{
    Triangle t;
    std::cout << "Perimeter of Triangle is " << t.perimeter() << std::endl;
}