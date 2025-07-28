#include <iostream>
#include <iomanip>

/*
    1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

int main()
{
    float num1{}, num2{}, num3{}, num4{};

    std::cout << "Nota 1: ";
    std::cin >> num1;
    std::cout << "Nota 2: ";
    std::cin >> num2;
    std::cout << "Nota 3: ";
    std::cin >> num3;
    std::cout << "Nota 4: ";
    std::cin >> num4;

    float media{ (num1 + num2 + num3 + num4) / 4.0f };

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Media: " << media << '\n';
    

    if (media >= 7.0)
        std::cout << "Aprovado!";
    else
        std::cout << "Reprovado!";

    return 0;
}

// Completed