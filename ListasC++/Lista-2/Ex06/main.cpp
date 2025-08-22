#include <iostream>
#include <cmath> // para std::abs

/*
    6. Faça um programa que receba dois números e execute uma das operações listadas a seguir de acordo com a escolha do usuário. Se for digitada uma opção inválida mostrar mensagem de erro e terminar a execução do programa. As opções são:

        Média entre os dois números.

        Diferença do maior pelo menor.

        O produto entre os dois números.
*/

int main()
{

    double num1{}, num2{};

    std::cout << "Primeiro numero: ";
    std::cin >> num1;
    std::cout << "Segundo numero: ";
    std::cin >> num2;

    int op{};
    std::cout << "\nEscolha uma operacao:\n";
    std::cout << "1 - Media entre os dois numeros.\n";
    std::cout << "2 - Diferenca do maior pelo menor.\n";
    std::cout << "3 - O produto entre os dois numeros.\n";
    std::cout << "-> ";
    std::cin >> op;
    
    switch (op)
    {

    case 1:
        std::cout << "Media: " << (num1 + num2) / 2 << '\n';
        break;
    case 2:
        std::cout << "Diferenca: " << std::abs(num1 - num2) << '\n';
        break;
    case 3:
        std::cout << "Produto: " << num1 * num2 << '\n';
        break;
    default:
        std::cout << "Erro! Escolha invalida." << '\n';
        break;
    }

    return 0;
}