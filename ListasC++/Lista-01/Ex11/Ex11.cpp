#include <iostream>

using std::cout; 
using std::cin;

// 11. Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor) / 2

int main()
{
    float diagonalMaior{}, diagonalMenor{};

    cout << "Qual o valor da diagonal maior do losango (cm)? ";
    cin >> diagonalMaior;
    cout << "Qual o valor da diagonal menor do losango (cm)? ";
    cin >> diagonalMenor;

    float area{ (diagonalMaior * diagonalMenor) / 2.0f };

    cout << "A area do losango eh: " << area << " cm";

    return 0;
}

// Completed