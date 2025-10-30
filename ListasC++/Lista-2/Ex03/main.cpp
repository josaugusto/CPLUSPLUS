#include <iostream>

using namespace std;

// 3. Faça um programa que receba dois números e mostre o menor.

int main()
{
    int num1{}, num2{};

    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;

    if (num1 < num2)
        cout << num1 << " e menor que " << num2;
    else if (num2 < num1)
        cout << num2 << " e menor que " << num1;
    else
        cout << "Os numeros sao iguais!";
    
    return 0;
}

// Completed