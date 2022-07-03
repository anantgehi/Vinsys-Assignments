//Print table of 19 using while loop.

#include <iostream>

int main()
{
    std::cout << "Table of 19\n";
    int i = 1;
    while (i <= 10) {
        std::cout << 19 << " X " << i << " = " << 19 * i << std::endl;
        ++i;
    }
}

