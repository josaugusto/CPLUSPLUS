#include <iostream>

using std::cout, std::cin;

/*
    Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais 
    desse polígono, onde N é o número de lados do polígono. Sabe-se que ND = N(N − 3)/2.
*/

int main()
{
    int numLados{}, numDiagonais{};

    cout << "Lados do poligono: ";
    cin >> numLados;

    numDiagonais = numLados * (numLados - 3) / 2;

    cout << "O numero de diagonais eh: " << numDiagonais;

    return 0;
}

// Completed
