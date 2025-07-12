#include <iostream>

using std::cout, std::cin;

// 11. Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor) / 2

int main()
{
    float diagonal_maior{}, diagonal_menor{};

    cout << "Qual o valor da diagonal maior do losango (cm)? ";
    cin >> diagonal_maior;
    cout << "Qual o valor da diagonal menor do losango (cm)? ";
    cin >> diagonal_menor;

    float area{ (diagonal_maior * diagonal_menor) / 2.0f };

    cout << "A area do losango eh: " << area << " cm";

    return 0;
}

// Completed