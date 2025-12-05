#include <iostream>

using std::cout, std::cin;

/*
    15. João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, 
    João terá de pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário do João.
*/

int main()
{
    double salario{}, conta1{}, conta2{};

    cout << "Salario: ";
    cin >> salario;
    cout << "Primeira Conta: ";
    cin >> conta1;
    cout << "Segunda Conta: ";
    cin >> conta2;

    double multa{ conta1 * 0.02 + conta2 * 0.02 };
    double salarioRestante{ salario - (conta1 + conta2 + multa) };

    cout << "Apos o pagamento das contas e multa o salario final eh: " << salarioRestante;
    
    return 0;
}

// Completed