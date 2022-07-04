//Define class triangle which is composition for 3 points

#include <iostream>

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
    ~Point()
    {
        std::cout << "Point Dtor Called" << std::endl;
    }
};

class Triangle
{
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle()
    {
        std::cout << "Triangle Ctor Called" << std::endl;
    }
    ~Triangle()
    {
        std::cout << "Triangle Dtor Called" << std::endl;
    }
};

int main()
{
    Triangle t;
}

