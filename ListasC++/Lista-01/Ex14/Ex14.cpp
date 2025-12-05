#include <iostream>

using std::cout, std::cin;

/*
    14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:

        a) a idade dessa pessoa em anos;
        b) a idade dessa pessoa em meses;
        c) a idade dessa pessoa em dias;
        d) a idade dessa pessoa em semanas.
*/

int main()
{
    int anoNascimento{}, anoAtual{};

    cout << "Qual o ano de nascimento da pessoa? ";
    cin >> anoNascimento;
    cout << "Qual o ano atual? ";
    cin >> anoAtual;

    int idade{anoAtual - anoNascimento},
    idadeMeses{idade * 12},
    idadeDias{idade * 365}, 
    idadeSemanas{idadeDias / 7};

    cout << "Idade em anos: " << idade << '\n';
    cout << "Idade em meses: " << idadeMeses << '\n';
    cout << "Idade em dias: " << idadeDias<< '\n';
    cout << "Idade em semanas: " << idadeSemanas << '\n';

    return 0;
}

// Completed