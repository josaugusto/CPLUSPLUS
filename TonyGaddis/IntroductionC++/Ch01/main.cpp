#include <iostream>

/*
    1. Product of Three Numbers
        Write a program that assigns the values 10, 20, and 30 to three integer variables and
        then stores the product of these three variables in another variable, product.
*/

int main()
{
    int num1{ 10 }, num2{ 20 }, num3{ 30 };

    int product{ num1 * num2 * num3 };

    std::cout << "Product: " << product << '\n';

    return 0;
}
