#include <iostream>
#include <iomanip>

using namespace std;

/*
    13. Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.

        | **PREÇO**                  | **%** |
        | -------------------------- | ----- |
        | Até R$ 50,00               | 5     |
        | Entre R$ 50,00 e R$ 100,00 | 10    |
        | Acima de R$ 100,00         | 15    |
        

        | **NOVO PREÇO**                          | **CLASSIFICAÇÃO** |
        | --------------------------------------- | ----------------- |
        | Até R$ 80,00                            | Barato            |
        | Entre R$ 80,00 e R$ 120,00 (inclusive)  | Normal            |
        | Entre R$ 120,00 e R$ 200,00 (inclusive) | Caro              |
        | Maior que R$ 200,00                     | Muito caro        |
*/

int main()
{
    double preco{};

    cout << "Informe o preco (R$) do produto: ";
    cin >> preco;

    double aumento{};

    if (preco <= 50.00) aumento = preco * 0.05;
    else if (preco <= 100.00) aumento = preco * 0.10;
    else aumento = preco * 0.15;

    double novoPreco{ preco + aumento };

    cout << fixed << showpoint << setprecision(2);
    cout << "Novo preco: " << novoPreco << " R$\n";

    if (novoPreco <= 80.00) cout << "Barato\n";
    else if (novoPreco <= 120.00) cout << "Normal\n";
    else if (novoPreco <= 200.00) cout << "Caro\n";
    else cout << "Muito caro\n";

    

    return 0;
}