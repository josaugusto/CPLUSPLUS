#include <iostream>

using std::cout;
using std::cin;

/*
    Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.

        Sabe-se que a cotação do:

            dólar é de R$ 1,80,

            marco alemão é de R$ 2,00,

            libra esterlina é de R$ 1,57.
*/

int main()
{
    double dinheiro_reais{};

    cout << "Dinheiro em reais(R$): ";
    cin >> dinheiro_reais;

    double dinheiro_dolares{ dinheiro_reais * 1.80 }; 
    double dinheiro_alemao{ dinheiro_reais * 2.00 }; 
    double dinheiro_libra{ dinheiro_reais * 1.57 };

    cout << "Reais para Dolar: " << dinheiro_dolares << " US$" << '\n';
    cout << "Reais para Marco Alemao: " << dinheiro_alemao << " DM" << '\n';
    cout << "Reais para Libra: " << dinheiro_libra << " £" << '\n';

    return 0;
}

// Completed