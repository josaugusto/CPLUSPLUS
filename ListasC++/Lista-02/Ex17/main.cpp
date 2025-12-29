#include <iostream>

using namespace std;

/*
	17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. 
	Deve ser impressa mensagem de permissão de acesso ou não.
*/

int main()
{
	int senha{};

	cout << "Senha: ";
	cin >> senha;

	if (senha == 1234)
		cout << "Acesso permitido\n";
	else
		cout << "Acesso negado\n";
	

	return 0;
}

// Completed