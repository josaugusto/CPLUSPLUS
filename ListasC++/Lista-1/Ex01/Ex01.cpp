#include <iostream>

using std::cout; 
using std::cin;

// 1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.

int main()
{
	int num1{}, num2{};

	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;

	int soma{ num1 + num2 };

	cout << num1 << " + " << num2 << " = " << soma;

	return 0;
}

// Completed
