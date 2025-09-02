#include <iostream>
#include <iomanip>

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

    std::cout << "Qual o saldo do cliente(R$)? ";
    std::cin >> saldoCliente;

    if (saldoCliente <= 200.00) creditoCliente = saldoCliente * 0.10;
    else if (saldoCliente <= 300.00) creditoCliente = saldoCliente * 0.20;
    else if ( saldoCliente <= 400.00) creditoCliente = saldoCliente * 0.25;
    else creditoCliente = saldoCliente * 0.30;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Saldo do Cliente: " << saldoCliente << " R$\n" << "Credito do Cliente: " << creditoCliente << " R$\n";

    return 0;
}

// Completed