#include <iostream>

using namespace std;

/*
    2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que está na tabela a seguir:

        MÉDIA ARITMÉTICA	MENSAGEM
         0,0 ---- 4,0	     Reprovado
         4,0 ---- 7,0	      Exame
         7,0 ---- 10,0	     Aprovado
*/

int main()
{

    float nota1 = 0, nota2 = 0;

    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2.0f;

    cout << "Media: " << media << '\n';

    if (media >= 0.0 && media < 4.0)
        cout << "Reprovado\n";
    else if (media >= 4.0 && media < 7.0)
        cout << "Exame\n";
    else 
        cout << "Aprovado\n";

    return 0;
}

// Completed