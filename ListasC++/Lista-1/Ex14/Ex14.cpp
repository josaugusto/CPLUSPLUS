#include <iostream>

using std::cout;
using std::cin;

/*
    14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:

        a) a idade dessa pessoa em anos;
        b) a idade dessa pessoa em meses;
        c) a idade dessa pessoa em dias;
        d) a idade dessa pessoa em semanas.
*/

int main()
{

    int ano_nascimento{}, ano_atual{};

    cout << "Qual o ano de nascimento da pessoa? ";
    cin >> ano_nascimento;
    cout << "Qual o ano atual? ";
    cin >> ano_atual;

    int idade{ano_atual - ano_nascimento}, idade_meses{idade * 12}, 
    idade_dias{idade * 365}, idade_semanas{idade_dias / 7};

    cout << "Idade em anos: " << idade << '\n';
    cout << "Idade em meses: " << idade_meses << '\n';
    cout << "Idade em dias: " << idade_dias<< '\n';
    cout << "Idade em semanas: " << idade_semanas << '\n';

    return 0;
}