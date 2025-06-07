#include <iostream>

using std::cout;
using std::cin;

// 13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.

int main()
{
    int numero{};

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << numero << " x " << 1 << " = " << numero * 1 << "\n";
    cout << numero << " x " << 2 << " = " << numero * 2 << "\n";
    cout << numero << " x " << 3 << " = " << numero * 3 << "\n";
    cout << numero << " x " << 4 << " = " << numero * 4 << "\n";
    cout << numero << " x " << 5 << " = " << numero * 5 << "\n";
    cout << numero << " x " << 6 << " = " << numero * 6 << "\n";
    cout << numero << " x " << 7 << " = " << numero * 7 << "\n";
    cout << numero << " x " << 8 << " = " << numero * 8 << "\n";
    cout << numero << " x " << 9 << " = " << numero * 9 << "\n";
    cout << numero << " x " << 10 << " = " << numero * 10 << "\n";

    return 0;
}

// Completed