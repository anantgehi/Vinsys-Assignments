//Define 3 separate functions to swap its contents. 
//(pass by value, pass by reference, pass by address)
//Print the values before and after swap in caller.

#include <iostream>

void pass_by_value(int, int);
void pass_by_reference(int&, int&);
void pass_by_address(int*, int*);

int main()
{
    int a, b;
    std::cout << "Enter values of a and b : ";
    std::cin >> a >> b;

    //Pass by value
    std::cout << "Pass By Value : Before swapping a = "<< a <<" b = "<< b << std::endl;
    pass_by_value(a, b);
    std::cout << "Pass By Value : After swapping a = " << a << " b = " << b << std::endl;

    //Pass by reference
    int& A = a;
    int& B = b;
    std::cout << "Pass By Reference : Before swapping a = " << a << " b = " << b << std::endl;
    pass_by_reference(A, B);
    std::cout << "Pass By Reference : After swapping a = " << a << " b = " << b << std::endl;

    //Pass by address
    int* _a = &a;
    int* _b = &b;
    std::cout << "Pass By Address : Before swapping a = " << a << " b = " << b << std::endl;
    pass_by_address(_a, _b);
    std::cout << "Pass By Address : After swapping a = " << a << " b = " << b << std::endl;
}

void pass_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void pass_by_reference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void pass_by_address(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

