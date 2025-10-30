#include <iostream>
#include <iomanip>

using namespace std;

/*
    8. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. Sabe-se que o percentual de aumento é o mesmo da tabela a seguir.

        | **Salário**         | **Percentual de aumento** |
        | ------------------- | ------------------------- |
        | Até R$ 300,00       | 35%                       |
        | Acima de R$ 300,00  | 15%                       |
*/

int main()
{
    double salario{};

    cout << "Qual o salario do funcionario? ";
    cin >> salario;

    double salarioReajustado{};

    cout << fixed << showpoint << setprecision(2);

    if (salario <= 300.00)
    {
        salarioReajustado = salario + (salario * 0.35);
        cout << "Reajuste de 35% = " << salarioReajustado << " R$\n";
    }
    else
    {
        salarioReajustado = salario + (salario * 0.15);
        cout << "Reajuste de 15% = " << salarioReajustado << " R$\n";
    }

    return 0;
}

// Completed