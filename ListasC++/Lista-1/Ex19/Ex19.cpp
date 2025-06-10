#include <iostream>

using std::cout;
using std::cin;

/*
    19. Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m², 
    deve-se usar 18 W de potência. Faça um programa que receba as duas dimensões de um cômodo 
    (em metros), calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser 
    utilizada.
*/

int main()
{
    float base{}, altura{};

    cout << "Base (m): ";
    cin >> base;
    cout << "Altura (m): ";
    cin >> altura;

    float area{base * altura}; 
    float potencia{area * 18};

    cout << "A potencia devera ser de: " << potencia << " W";

    return 0;
}

// Completed