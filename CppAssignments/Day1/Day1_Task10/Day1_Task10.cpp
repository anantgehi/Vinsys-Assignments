// Declare reference to above dyanmically allocated memory
#include <iostream>

int main()
{
    int* a = new int(9);

    int& ref = *a;
}
