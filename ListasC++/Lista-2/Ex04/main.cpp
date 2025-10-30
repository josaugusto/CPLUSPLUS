#include <iostream>

using namespace std;

// 4. Faça um programa que receba três números e mostre o maior.

int maiorNumero(int num1, int num2, int num3)
{
    int maior{};

    if (num1 >= num2 && num1 >= num3)
        maior = num1;
    else if (num2 >= num1 && num2 >= num3)
        maior = num2;
    else
        maior = num3;

    return maior;
}

int main()
{
    int num1{}, num2{}, num3{};

    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    cout << "Numero 3: ";
    cin >> num3;

    cout << "Maior: " << maiorNumero(num1, num2, num3);
  
    return 0;
}

// Completed