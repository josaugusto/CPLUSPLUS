#include <iostream>

using std::cout, std::cin;

// 1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.

int main()
{
	int num_1{}, num_2{};

	cout << "Digite o primeiro numero: ";
	cin >> num_1;
	cout << "Digite o segundo numero: ";
	cin >> num_2;

	int soma{ num_1 + num_2 };

	cout << "A soma do numero " << num_1 << " e o numero " << num_2 << " eh igual a " << soma;

	return 0;
}

// Completed