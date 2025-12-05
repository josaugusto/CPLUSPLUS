#include <iostream>

using std::cout; 
using std::cin;

// 8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main()
{
	double pesoKilo{};
	cout << "Qual seu peso em kg? ";
	cin >> pesoKilo;

	double pesoGrama{ pesoKilo * 1000 };

	cout << "O seu peso em gramas eh: " << pesoGrama << " g";
	
	return 0;
}

// Completed