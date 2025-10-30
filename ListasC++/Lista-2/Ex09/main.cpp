#include <iostream>
#include <iomanip>

using namespace std;

/*
    9. Um banco concederá um crédito especial aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.

        | **Saldo médio**           | **Percentual**     |
        | ------------------------- | ------------------ |
        | Acima de R$ 400,00        | 30% do saldo médio |
        | R$ 400,00 até R$ 300,00   | 25% do saldo médio |
        | R$ 300,00 até R$ 200,00   | 20% do saldo médio |
        | Até R$ 200,00             | 10% do saldo médio |
*/

int main()
{
    double saldoCliente{}, creditoCliente{};

    cout << "Qual o saldo do cliente(R$)? ";
    cin >> saldoCliente;

    if (saldoCliente <= 200.00) creditoCliente = saldoCliente * 0.10;
    else if (saldoCliente <= 300.00) creditoCliente = saldoCliente * 0.20;
    else if ( saldoCliente <= 400.00) creditoCliente = saldoCliente * 0.25;
    else creditoCliente = saldoCliente * 0.30;

    cout << fixed << showpoint << setprecision(2);
    cout << "Saldo do Cliente: " << saldoCliente << " R$\n" << "Credito do Cliente: " << creditoCliente << " R$\n";

    return 0;
}

// Completed