//Define struct point3 with x, y, z as member data.

#include <iostream>
#include <crtdbg.h>

struct point3
{
    int x;
    int y;
    int z;

    point3()
    {
        std::cout << "Point3 default Ctor Called" << std::endl;
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    point3(int x, int y, int z)
    {
        std::cout << "Parameterized Ctor Called" << std::endl;
        this->x = x;
        this->y = y;
        this->z = z;
    }

    ~point3()
    {
        std::cout << "Point3 Dtor Called" << std::endl;
    }

};

class PointCloud {

    int size;
    point3* arr;

public:
    PointCloud()
    {
        std::cout << "Ctor of PointCloud called" << std::endl;
        std::cout << "Enter size of point3 array : ";
        std::cin >> size;
        arr = new point3[size];
    }
    ~PointCloud()
    {
        std::cout << "Dtor of PointCloud called" << std::endl;
        delete[] arr;
        arr = nullptr;
    }
};

int main()
{
    {
        PointCloud pc;
    }
    std::cout << "Leaks " << _CrtDumpMemoryLeaks() << std::endl;
}