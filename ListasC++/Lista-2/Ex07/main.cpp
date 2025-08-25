#include <iostream>
#include <iomanip>

/*
    7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso o funcionário não tenha direito ao aumento.
*/

int main()
{
    float salario{};

    std::cout << "Salario do Funcionario: ";
    std::cin >> salario;

    std::cout << std::fixed << std::setprecision(2);
    if (salario < 500.00)
    {
        float salarioReajustado{ salario + (salario * 0.30f) };
        std::cout << "Salario reajustado = " << salarioReajustado << " R$\n";
    }
    else 
        std::cout << "Funcionario nao possui direito ao aumento." << '\n';


    return 0;
}

// Completed