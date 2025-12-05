#include <iostream>

using std::cout, std::cin;

// 9. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior + base menor) * altura) / 2

int main()
{
    float baseMaior{}, baseMenor{}, altura{};

    cout << "Qual o valor da base maior do trapezio (cm)? ";
    cin >> baseMaior;
    cout << "Qual o valor da base menor do trapezio (cm)? ";
    cin >> baseMenor;
    cout << "Qual o valor da altura do trapezio (cm)? ";
    cin >> altura;

    float area{ ((baseMaior + baseMenor) * altura) / 2.0f };

    cout << "A area do trapezio eh: " << area << " cm.";
    
    return 0;
}

// Completed