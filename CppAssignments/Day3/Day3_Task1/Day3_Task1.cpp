// Define class line which is composition of 2 points
// Predict the scope of point objects. Cross check with CTOR and DTO

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

class Line 
{
    Point p1;
    Point p2;

public:
    Line()
    {
        std::cout << "Line Ctor Called" << std::endl;
    }
    ~Line()
    {
        std::cout << "Line Dtor Called" << std::endl;
    }
};

int main()
{
    Line l;
}
