//Print even numbers from 0 to 100.

#include <iostream>

int main()
{
    std::cout << "Even Numbers from 0 to 100" << std::endl;
    for (int i = 0; i <= 100; ++i) {
        if (i%2==0)
            std::cout << i << std::endl;
    }
}
