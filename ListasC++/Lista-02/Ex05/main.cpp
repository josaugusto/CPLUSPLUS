#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
    5. Faça um programa que receba dois números e execute as operações listadas a seguir de acordo com a escolha do usuário.

        | **Escolha do usuário** | **Operação**                       |
        | ---------------------- | ---------------------------------- |
        | 1                      | Média entre os números digitados   |
        | 2                      | Diferença do maior pelo menor      |
        | 3                      | Produto entre os números digitados |
        | 4                      | Divisão do primeiro pelo segundo   |
*/

int main()
{
    double num1{}, num2{};

    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;

    int opcao{};

    cout << "Escolha uma das opcoes abaixo!\n";
    cout << "1 - Media entre os numeros digitados\n";
    cout << "2 - Diferenca do maior pelo menor\n";
    cout << "3 - Produto entre os numeros digitados\n";
    cout << "4 - Divisao do primeiro pelo segundo\n-> ";
    cin >> opcao;

    cout << fixed << showpoint << setprecision(2);

    switch (opcao)
    {
    case 1:
        cout << "Media: " << (num1 + num2) / 2;
        break;

    case 2:
        cout << "Diferenca: " << abs(num1 - num2);
        break;

    case 3:
        cout << "Produto: " << num1 * num2;
        break;

    case 4:
        if (num2 == 0.0) cout << "Erro! nao e possivel realizar divisao por zero.";
        else cout << "Divisao: " << num1 / num2;
        break;
    
    default:
        cout << "Erro! opcao invalida.";
        break;
    }

    cout << "\nOperacao concluida com sucesso!\n";

    return 0;
}

// Completed