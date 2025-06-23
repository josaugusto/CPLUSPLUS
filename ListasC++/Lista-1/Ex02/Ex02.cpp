#include <iostream>

using std::cout;
using std::cin;

// 2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

int main()
{
    int num_1{}, num_2{}, num_3{};

    cout << "Insira o primeiro numero: ";
    cin >> num_1;
    cout << "Insira o segundo numero: ";
    cin >> num_2;
    cout << "Insira o terceiro numero: ";
    cin >> num_3;

    int multiplicacao{ num_1 * num_2 * num_3 };

    cout << "O resultado da multiplicao dos tres numeros eh: " << multiplicacao;

    return 0;
}

// Completed