#include <iostream>
#include <cmath>

using namespace std;

// 16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main()
{
    double cateto_a{}, cateto_b{};

    cout << "Informe o valor do cateto A: ";
    cin >> cateto_a;
    cout << "Informe o valor do cateto B: ";
    cin >> cateto_b;

    double hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));

    cout << "O valor da hipotenusa eh: " << hipotenusa;

    return 0;
}

// Completed