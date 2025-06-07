#include <iostream>

using std::cout;
using std::cin;

/*
	6. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário 
	fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.
*/

int main()
{
	double salario{}, vendas{};

	cout << "Qual o salario do funcionario? ";
	cin >> salario;
	cout << "Qual o valor de suas vendas? ";
	cin >> vendas;

	double comissao{}, salario_final{};

	comissao = vendas * 0.04;
	salario_final = salario + comissao;

	cout << "O salario final do funcionario eh: " << salario_final;
	
	return 0;
}

// Completed