//Print half pyramid & inverted half pyramid using for loops.
//30 + Most Asked Pattern Programs in C, C++and Java | FACE Prep

#include <iostream>

int main()
{
    char symbol = '%';
    int height = 0;
    std::cout << "Enter height of the pyramid : ";
    std::cin >> height;

    std::cout << "Half Pyramid\n";
    for (int i = 0; i <= height; ++i) {
        for (int j = 0; j < i; ++j)
            std::cout << symbol;
        std::cout<<std::endl;
    }

    std::cout << std::endl;

    std::cout << "Inverted Half Pyramid\n\n";
    for (int i = height; i >= 0; --i) {
        for (int j = 0; j < i; ++j)
            std::cout << symbol;
        std::cout << std::endl;
    }
}
