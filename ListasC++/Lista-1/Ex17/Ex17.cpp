#include <iostream>
#include <cmath>

using namespace std;

/*
    17. Faça um programa que receba o raio, calcule e mostre:

        a) o comprimento de uma esfera, sabe-se que C = 2πR;
        b) a área de uma esfera, sabe-se que A = 4πR^2;
        C) o volume de uma esfera, sabe-se que V = 4/3πR^3.
*/

int main()
{
    double raio{}, comprimento{}, area{}, volume{}, pi{3.14};

    cout << "Qual o raio da esfera? ";
    cin >> raio;

    comprimento = 2 * pi * raio;
    area = 4 * pi * pow(raio, 2);
    volume = 4.0/3.0 * pi * pow(raio, 3);

    cout << "Comprimento: " << comprimento << '\n';
    cout << "Area: " << area << '\n';
    cout << "Volume: " << volume << '\n';

    return 0;
}