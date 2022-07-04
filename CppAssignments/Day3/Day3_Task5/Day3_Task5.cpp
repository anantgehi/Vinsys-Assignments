#include <iostream>

class Chair
{
    int legs;
public:
    Chair()
    {
        std::cout << "Chair Ctor called" << std::endl;
    }
    ~Chair()
    {
        std::cout << "Chair Dtor called" << std::endl;
    }
};

class Classroom
{
    Chair chair1;
    Chair chair2;
    Chair chair3;

public:
    Classroom()
    {
        std::cout << "Classroom Ctor called" << std::endl;
    }
    ~Classroom()
    {
        std::cout << "Classroom Dtor called" << std::endl;
    }
};


int main()
{
    Classroom c1;
    Classroom c2;
    Classroom c3;
    Classroom c4;
}


