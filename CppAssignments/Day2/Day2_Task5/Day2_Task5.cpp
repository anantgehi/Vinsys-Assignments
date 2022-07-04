//Write member function to return point by index.
// Return const object.
//Try to change contents at client code

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
    point3 mem_func(const point3* arr) 
    {
        //arr[0].x = 5;
        //arr[0].y = 5;
        //arr[0].z = 5;
        return arr[0];
    }
};

int main()
{
    {
        PointCloud pc;
    }
    std::cout << "Leaks " << _CrtDumpMemoryLeaks() << std::endl;
}