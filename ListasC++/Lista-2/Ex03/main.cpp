#include <iostream>

// 3. Faça um programa que receba dois números e mostre o menor.

int main()
{
    int num1{}, num2{};

    std::cout << "Numero 1: ";
    std::cin >> num1;
    std::cout << "Numero 2: ";
    std::cin >> num2;

    if (num1 < num2)
        std::cout << num1 << " e menor que " << num2;
    else if (num2 < num1)
        std::cout << num2 << " e menor que " << num1;
    else
        std::cout << "Os numeros sao iguais!";
    
    return 0;
}

// Completed