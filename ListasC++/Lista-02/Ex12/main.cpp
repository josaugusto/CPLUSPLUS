#include <iostream>
#include <iomanip>

using namespace std;

/*
    12. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o valor a receber. Sabe-se que este é composto pelo salário do funcionário acrescido de gratificação e descontado o imposto de 7% sobre o salário sem gratificação.

    | **SALÁRIO**                     | **GRATIFICAÇÃO** |
    | ------------------------------- | ---------------- |
    | Até R$ 350,00                   | R$ 100,00        |
    | R$ 350,00  a  R$ 600,00         | R$ 75,00         |
    | R$ 600,00  a  R$ 900,00         | R$ 50,00         |
    | Acima de R$ 900,00              | R$ 35,00         |
*/

int main()
{
    double salarioDoFuncionario{};

    cout << "Informe o salario do funcionario: ";
    cin >> salarioDoFuncionario;

    double salarioFinal{}, imposto{};

    imposto = salarioDoFuncionario * 0.07;

    if (salarioDoFuncionario <= 350.00)
        salarioFinal = salarioDoFuncionario - imposto + 100.00;       

    else if (salarioDoFuncionario <= 600.00)
        salarioFinal = salarioDoFuncionario - imposto + 75.00;    

    else if (salarioDoFuncionario <= 900.00)
        salarioFinal = salarioDoFuncionario - imposto + 50.00;     
    else
        salarioFinal = salarioDoFuncionario - imposto + 35.00;   

    
    cout << fixed << showpoint << setprecision(2);
    cout << "Novo salario do funcionario (R$): " << salarioFinal;

    return 0;
}

// Completed