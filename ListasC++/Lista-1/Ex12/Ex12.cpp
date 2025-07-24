#include <iostream>

using std::cout; 
using std::cin;

/*
     12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, 
    calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
*/

int main()
{
    float salarioMinimo{}, salarioFuncionario;

    cout << "Qual o salario(R$) minimo vigente? ";
    cin >> salarioMinimo;
    cout << "Qual o salario(R$) do funcionario? ";
    cin >> salarioFuncionario;

    float salarios{ salarioFuncionario / salarioMinimo };

    cout << "A quantidade de salarios minimos que o funcionarios recebe eh: " << salarios << " salarios minimos.";

    return 0;
}

// Completed