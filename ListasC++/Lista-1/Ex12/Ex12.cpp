#include <iostream>

using std::cout;
using std::cin;

/*
     12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, 
    calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
*/

int main()
{
    float salario_minimo{}, salario_funcionario;

    cout << "Qual o salario(R$) minimo vigente? ";
    cin >> salario_minimo;
    cout << "Qual o salario(R$) do funcionario? ";
    cin >> salario_funcionario;

    float qtd_salarios{ salario_funcionario / salario_minimo };

    cout << "A quantidade de salarios minimos que o funcionarios recebe eh: " << qtd_salarios << " salarios minimos.";

    return 0;
}

// Completed