#include <iostream>
#include <iomanip>

using namespace std;

/*
    10. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de fábrica. Sabe-se que as porcentagens são as mesmas que estão na tabela a seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o custo ao consumidor.

        | CUSTO DE FÁBRICA                    | % DO DISTRIBUIDOR | % DOS IMPOSTOS |
        | ----------------------------------- | ----------------- | -------------- |
        | Até R$ 12.000,00                    | 5                 | isento         |
        | Entre R$ 12.000,00 e R$ 25.000,00   | 10                | 15             |
        | Acima de R$ 25.000,00               | 15                | 20             |
*/

int main()
{
    double custoFabrica{};

    cout << "Qual o custo de fabrica do carro(R$)? ";
    cin >> custoFabrica;

    double custoConsumidor{};

    if (custoFabrica <= 12000.00) 
    custoConsumidor = custoFabrica + (custoFabrica * 0.05);
    else if(custoFabrica <= 25000.00)
        custoConsumidor = custoFabrica + (custoFabrica * 0.10) + (custoFabrica * 0.15);
    else
        custoConsumidor = custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.20);

    cout << fixed << showpoint << setprecision(2);
    cout << "Custo ao consumidor = R$ " << custoConsumidor << '\n'; 

    return 0;
}

// Completed