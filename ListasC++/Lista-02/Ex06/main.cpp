#include <iostream>
#include <cmath> // para std::abs

using namespace std;

/*
    6. Faça um programa que receba dois números e execute uma das operações listadas a seguir de acordo com a escolha do usuário. Se for digitada uma opção inválida mostrar mensagem de erro e terminar a execução do programa. As opções são:

        Média entre os dois números.

        Diferença do maior pelo menor.

        O produto entre os dois números.
*/

int main()
{

    double num1{}, num2{};

    cout << "Primeiro numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;

    int op{};
    cout << "\nEscolha uma operacao:\n";
    cout << "1 - Media entre os dois numeros.\n";
    cout << "2 - Diferenca do maior pelo menor.\n";
    cout << "3 - O produto entre os dois numeros.\n";
    cout << "-> ";
    cin >> op;
    
    switch (op)
    {

    case 1:
        cout << "Media: " << (num1 + num2) / 2 << '\n';
        break;
    case 2:
        cout << "Diferenca: " << abs(num1 - num2) << '\n';
        break;
    case 3:
        cout << "Produto: " << num1 * num2 << '\n';
        break;
    default:
       cout << "Erro! Escolha invalida." << '\n';
        break;
    }

    return 0;
}

// Completed