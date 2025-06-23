#include <iostream>

using std::cout;
using std::cin;

// 10. Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado

int main()
{
    float lado{};

    cout << "Qual o valor do lado do quadro (cm)? ";
    cin >> lado;

    float area{ lado * lado };

    cout << "A area do quadro eh (cm): " << area;

    return 0;
}

// Completed