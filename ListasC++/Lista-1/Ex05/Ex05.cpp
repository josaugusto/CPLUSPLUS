#include <iostream>

using std::cout;
using std::cin;

// 5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

int main()
{
	float price{};

	cout << "Insira o preco do produto: ";
	cin >> price;

	float new_price{ price - price * 0.10f };

	cout << "O preco do produto apos o desconto de 10% eh igual a: " << new_price << " R$";

	return 0;
}

// Completed