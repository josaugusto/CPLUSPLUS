#include <iostream>
#include <iomanip>

using namespace std;

/*
    1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

int main()
{
    float num1{}, num2{}, num3{}, num4{};

    cout << "Nota 1: ";
    cin >> num1;
    cout << "Nota 2: ";
    cin >> num2;
    cout << "Nota 3: ";
    cin >> num3;
    cout << "Nota 4: ";
    cin >> num4;

    float media{ (num1 + num2 + num3 + num4) / 4.0f };

    cout <<fixed <<setprecision(2);
    cout << "Media: " << media << '\n';

    if (media >= 7.0)
       cout << "Aprovado!";
    else
       cout << "Reprovado!";

    return 0;
}

// Completed
