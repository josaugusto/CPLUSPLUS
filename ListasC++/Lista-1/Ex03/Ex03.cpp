#include <iostream>

using std::cout; 
using std::cin;

/*
  3. Faça um programa que receba dois números, calcule e mostre a resultadoisão do primeiro número pelo segundo.
	Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.
*/

int main()
{
	float num1{}, num2{};

	cout << "Insira o primeiro numero: ";
	cin >> num1;
	cout << "Insira o segundo numero: ";
	cin >> num2;

	float resultado{ num1 / num2 };
	
	cout << num1 << " / " << num2 << " = " <<  resultado;

	return 0;
}

// Completed
