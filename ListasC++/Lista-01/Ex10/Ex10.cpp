#include <iostream>
#include <iomanip>

using namespace std;

// 10. Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado

int main()
{
    float lado{};

    cout << "Qual o valor do lado do quadro (cm)? ";
    cin >> lado;

    float area{ lado * lado };

    cout << setprecision(2) << fixed;
    cout << "A area do quadro eh (cm): " << area;

    return 0;
}

// Completed