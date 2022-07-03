//Write parameter CTOR for point3 struct.
//Create 2 object one on stack and one on heap. Note its CTOR and DTOR calls and scope.

//Print inside constructor and desctrutor and add scope to variable on stack and heap - this helps in understanding scope when memory is allocated on stack or heap

#include <iostream>
#include <crtdbg.h>

struct point3
{
    int x;
    int y;
    int z;

    point3(int x, int y, int z)
    {
        std::cout << "Parameterized Ctor Called" << std::endl;
        this->x = x;
        this->y = y;
        this->z = z;
    }

    ~point3()
    {
        std::cout << "Dtor Called" << std::endl;
    }

};

int main()
{
    point3 p1(-2, 3, 0);
    std::cout << "Point p1 : " << "x = " << p1.x << " y = " << p1.y << " z = " << p1.z << std::endl;
    point3* p2 = new point3(4, -3, 5);
    std::cout << "Point p2 : " << "x = " << p2->x << " y = " << p2->y << " z = " << p2->z << std::endl;
    delete p2;
    p2 = nullptr;
    std::cout << "Leaks " << _CrtDumpMemoryLeaks() << std::endl;
}
