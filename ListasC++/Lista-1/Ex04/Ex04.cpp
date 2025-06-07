#include <iostream>

using std::cout;
using std::cin;

/*
	4. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

int main()
{
	float nota_1{}, nota_2{};

	cout << "Digite a primeira nota: ";
	cin >> nota_1;
	cout << "Digite a segunda nota: ";
	cin >> nota_2;

	float resultado{ (nota_1 * 2 + nota_2 * 3) / 2 };

	cout << "O resultado eh: " << resultado;

	return 0;
}