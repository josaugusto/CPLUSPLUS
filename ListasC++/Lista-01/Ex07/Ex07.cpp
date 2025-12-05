#include <iostream>

using std::cout, std::cin;

/*
	7. Faça um programa que receba o peso de uma pessoa, calcule e mostre:
		a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
		b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
*/

int main()
{
	float peso{};

	cout << "Qual seu peso(kg)? ";
	cin >> peso;

	float pesoEngordar{ peso + peso * 0.15f }; 
	float pesoEmagrecer{ peso - peso * 0.20f };

	cout << "O seu peso caso voce engorde 15% eh de: " << pesoEngordar << '\n';
	cout << "O seu peso caso voce emagreca 20% eh de: " << pesoEmagrecer << '\n';

	return 0;
}

// Completed