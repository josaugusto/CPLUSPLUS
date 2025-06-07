#include <iostream>

using std::cout;
using std::cin;

// 9. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior + base menor) * altura) / 2

int main()
{
    double base_maior{}, base_menor{}, altura{};

    cout << "Qual o valor da base maior do trapezio (cm)? ";
    cin >> base_maior;
    cout << "Qual o valor da base menor do trapezio (cm)? ";
    cin >> base_menor;
    cout << "Qual o valor da altura do trapezio (cm)? ";
    cin >> altura;

    double area = ((base_maior + base_menor) * altura) / 2;

    cout << "A area do trapezio eh: " << area << " cm.";
    
    return 0;
}

// Completed