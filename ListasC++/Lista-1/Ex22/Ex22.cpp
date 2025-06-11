#include <iostream>

using std::cout;
using std::cin;

/*
    Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais 
    desse polígono, onde N é o número de lados do polígono. Sabe-se que ND = N(N − 3)/2.
*/

int main()
{
    int n_lados{}, n_diagonais{};

    cout << "Lados do poligono: ";
    cin >> n_lados;

    n_diagonais = n_lados * (n_lados - 3) / 2;

    cout << "O numero de diagonais desse poligono eh: " << n_diagonais;

    return 0;
}

// Completed