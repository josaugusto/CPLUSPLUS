#include <iostream>

using std::cout;
using std::cin;

/*
   Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário a receber seguindo as regras a seguir:

        a) a hora trabalhada vale 1/8 do salário mínimo;
        b) a hora extra vale 1/4 do salário mínimo;
        c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
        d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
        e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

int main()
{
    int horas_trabalhas{}, horas_extras{};
    double salario_minimo{};
    
    cout << "Horas trabalhas: ";
    cin >> horas_trabalhas;
    cout << "Horas extras: ";
    cin >> horas_extras;
    cout << "Salario minimo: ";
    cin >> salario_minimo;

    double valor_hora_trabalhada{ 1.0/8.0 * salario_minimo };
    double valor_hora_extra{ 1.0/4.0 * salario_minimo };
    double salario_bruto{ horas_trabalhas * valor_hora_trabalhada };
    double salario_extra{ horas_extras * valor_hora_extra };
    double salario_total{ salario_bruto + salario_extra };

    cout << "Valor por hora trabalhada: " << valor_hora_trabalhada << " R$" << '\n';
    cout << "Valor por hora extra: " << valor_hora_extra << " R$" << '\n';
    cout << "Salario bruto: " << salario_bruto << " R$" <<  '\n';
    cout << "Salario extra: " << salario_extra << " R$" << '\n';
    cout << "Salario total: " << salario_total << " R$" << '\n';

    return 0;
}

// Completed