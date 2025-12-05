#include <iostream>

using std::cout, std::cin;

/*
    Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo.
    Sabe-se que a soma dos ângulos de um triângulo é 180.
*/

int main()
{
    float angulo1{}, angulo2{}, angulo3{};

    cout << "Angulo 1: ";
    cin >> angulo1;
    cout << "Angulo 2: ";
    cin >> angulo2;
    
    angulo3 = 180 - (angulo1 + angulo2);

    cout << "A medida do angulo 3 do triangulo eh: " << angulo3;

    return 0;
}

// Completed
