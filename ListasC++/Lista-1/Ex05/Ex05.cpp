#include <iostream>
#include <iomanip>

using std::cout, std::cin;

// 5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

int main()
{
	float price{};

	cout << "Insira o preco do produto: ";
	cin >> price;

	float newPrice{ price - price * 0.10f };

	cout << std::setprecision(2) << std::fixed;
	cout << "O preco do produto apos o desconto de 10% eh igual a: " << newPrice << " R$";

	return 0;
}

// Completed