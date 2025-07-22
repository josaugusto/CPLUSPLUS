#include <iostream>

using std::cout, std::cin;

/*
    Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.

        Sabe-se que a cotação do:

            dólar é de R$ 1,80,

            marco alemão é de R$ 2,00,

            libra esterlina é de R$ 1,57.
*/

int main()
{
    float dinheiroReais{};

    cout << "Dinheiro em reais(R$): ";
    cin >> dinheiroReais;

    float dinheiroDolares{ dinheiroReais * 1.80f }; 
    float dinheiroAlemao{ dinheiroReais * 2.00f }; 
    float dinheiroLibra{ dinheiroReais * 1.57f };

    cout << "Reais para Dolar: " << dinheiroDolares << " US$" << '\n';
    cout << "Reais para Marco Alemao: " << dinheiroAlemao << " DM" << '\n';
    cout << "Reais para Libra: " << dinheiroLibra << " £" << '\n';

    return 0;
}

// Completed
