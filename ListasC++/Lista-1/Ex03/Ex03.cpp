#include <iostream>

using std::cout, std::cin;

/*
  3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
     Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.
*/

int main()
{
	float num_1{}, num_2{};

	cout << "Insira o primeiro numero: ";
	cin >> num_1;
	cout << "Insira o segundo numero: ";
	cin >> num_2;

	float div{ num_1 / num_2 };

	cout << num_1 << " / " << num_2 << " = " <<  div;

	return 0;
}

// Completed