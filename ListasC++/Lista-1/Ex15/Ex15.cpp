#include <iostream>

using std::cout;
using std::cin;

/*
    15. João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, 
    João terá de pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário do João.
*/

int main()
{
    double salario{}, conta_1{}, conta_2{};

    cout << "Salario: ";
    cin >> salario;
    cout << "Primeira Conta: ";
    cin >> conta_1;
    cout << "Segunda Conta: ";
    cin >> conta_2;

    double multa{conta_1 * 0.02 + conta_2 * 0.02};
    double salario_restante{salario - (conta_1 + conta_2 + multa)};

    cout << "Apos o pagamento das contas e multa o salario final eh: " << salario_restante;
    

    return 0;
}

// Completed