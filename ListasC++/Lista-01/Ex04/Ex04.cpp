#include <iostream>

using std::cout; 
using std::cin;

/*
	4. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

int main()
{
	float nota1{}, nota2{};

	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;

	float resultado{ (nota1 * 2 + nota2 * 3) / 2 };

	cout << "Resultado: " <<  resultado;

	return 0;
}

// Completed
