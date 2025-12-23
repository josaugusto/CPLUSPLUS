#include <iostream>
#include <iomanip>

using namespace std;

/*
	15. Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de 
	investimento e o valor do investimento e que calcule e mostre o valor corrigido de acordo com o tipo de investimento.

	**TIPO | DESCRIÇÃO | RENDIMENTO MENSAL**
		1  | Poupança  | 3%
		2  | Fundos de renda fixa | 4%
*/

int main()
{

	int tipoDeInvestimento{};

	cout << "Qual tipo de investimento você deseja fazer (Poupança(1) ou Fundos de renda fixa(2))? ";
	cin >> tipoDeInvestimento;
	
	double valorInvestido{}, percentual{};

	if (tipoDeInvestimento == 1)
	{
		cout << "Qual o valor do investimento que você deseja realizar na poupança (R$)? ";
		cin >> valorInvestido;

		percentual = 0.03;
	}
	else if (tipoDeInvestimento == 2)
	{
		cout << "Qual o valor do investimento que você deseja realizar em Fundos de Renda Fixa (R$)? ";
		cin >> valorInvestido;

		percentual = 0.04;
	}
	else
	{
		cout << "Tipo de investimento inválido!\n";
		return 0;
	}

	double valorCorrigido{};

	cout << fixed << showpoint << setprecision(2);

	valorCorrigido = valorInvestido + (valorInvestido * percentual);

	cout << "Após o investimento de R$" << valorInvestido <<
		", você terá R$" << valorCorrigido << '\n';

	return 0;
}

// Completed