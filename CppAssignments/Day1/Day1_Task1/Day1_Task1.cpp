//Enlist all the fundamental data types and print their ranges, min & max.

#include <iostream>
#include <limits.h>
#include <float.h>

int main()
{
    std::cout << "Fundamental Data Types in C++" << std::endl;
    std::cout << "char - min : " << CHAR_MIN << " " << "max : " << CHAR_MAX << std::endl;
    std::cout << "int - min : " << INT_MIN << " " << "max : " << INT_MAX << std::endl;
    std::cout << "float - min : " << FLT_MIN << " " << "max : " << FLT_MAX << std::endl;
    std::cout << "double - min : " << DBL_MIN << " " << "max : " << DBL_MAX << std::endl;
    return 0;
}

