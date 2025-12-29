#include <iostream>

using namespace std;

// 18. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

int main()
{
	int idade{};

	cout << "Informe a sua idade: ";
	cin >> idade;

	if (idade >= 18)
		cout << "Maior de idade!\n";
	else
		cout << "Menor de idade!\n";

	return 0;
}

// Completed