#include <iostream>

using std::cout, std::cin;

// 8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main()
{
	double peso_kg{};
	cout << "Qual seu peso em kg? ";
	cin >> peso_kg;

	double peso_g{ peso_kg * 1000 };

	cout << "O seu peso em gramas eh: " << peso_g << " g";
	
	return 0;
}

// Completed