#include <iostream>

using std::cout;
using std::cin;

// 5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

int main()
{
	double preco = 0;

	cout << "Insira o preco do produto: ";
	cin >> preco;

	double novo_preco = preco - (preco * 0.10);

	cout << "O preco do produto apos o desconto de 10% eh igual a: " << novo_preco << " R$";


	return 0;
}

// Completed