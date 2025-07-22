#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main()
{
    double catetoA{}, catetoB{};

    cout << "Informe o valor do cateto A: ";
    cin >> catetoA;
    cout << "Informe o valor do cateto B: ";
    cin >> catetoB;

    double hipotenusa{ sqrt(pow(catetoA, 2) + pow(catetoB, 2)) };

    cout << setprecision(2) << fixed;
    cout << "O valor da hipotenusa eh: " << hipotenusa;

    return 0;
}

// Completed