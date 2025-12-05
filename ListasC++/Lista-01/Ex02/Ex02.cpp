#include <iostream>

using std::cout; 
using std::cin;

// 2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

int main()
{
    int num1{}, num2{}, num3{};

    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;
    cout << "Insira o terceiro numero: ";
    cin >> num3;

    int resultado{ num1 * num2 * num3 };

    cout << "resultado: " << resultado;

    return 0;
}

// Completed
