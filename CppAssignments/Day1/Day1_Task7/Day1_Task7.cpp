//Write a function which returns the factorial of given number.

#include <iostream>

int factorial(int number);

int main()
{
    int number;
    std::cout << "Enter a number whose factorial needs to be calculated : ";
    std::cin >> number;
    std::cout << "Factorial of " << number << " is " << factorial(number);
}

int factorial(int number) {
    //terminating condition
    if (number == 0)
        return 1;
    return number * factorial(number - 1);
}