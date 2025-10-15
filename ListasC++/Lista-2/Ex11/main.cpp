#include <iostream>
#include <iomanip>

/*
    11. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o valor do aumento e o novo salário.

        | **SALÁRIO**                     | **PERCENTUAL DE AUMENTO** |
        | ------------------------------- | ------------------------- |
        | Até R$ 300,00                   | 15                        |
        | R$ 300,00 <br> a <br> R$ 600,00 | 10                        |
        | R$ 600,00 <br> a <br> R$ 900,00 | 5                         |
        | Acima de R$ 900,00              | 0                         |

*/

int main()
{
    double salarioFuncionario{};

    std::cout << "Salario (R$): ";
    std::cin >> salarioFuncionario;

    float percentualAumento{};

    if (salarioFuncionario <= 300.00) percentualAumento = 0.15;
    else if (salarioFuncionario <= 600.00) percentualAumento = 0.10;
    else if (salarioFuncionario <= 900.00) percentualAumento = 0.05;
    else percentualAumento = 0.0;

    double aumento{salarioFuncionario*percentualAumento};

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "Valor do aumento: R$" << aumento << '\n';
    std::cout << "Salario apos o aumento: R$" << salarioFuncionario + aumento;

    return 0;
}

// Completed