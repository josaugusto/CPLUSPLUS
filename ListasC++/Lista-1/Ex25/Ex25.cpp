#include <iostream>

using std::cout, std::cin;

/*
    Faça um programa que receba uma horas (uma variável para horas e outra para minutos), calcule e mostre:
        a) a horas digitada convertida em minutos;
        b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
        c) o total dos minutos convertidos em segundos.
*/

int main()
{
    int horas{}, minutos{};

    cout << "horas: ";
    cin >> horas;
    cout << "Minutos: ";
    cin >> minutos;

    int horasMinutos = horas * 60;
    int totalMinutos = horasMinutos + minutos;
    int totalSegundos = totalMinutos * 60;

    cout << "horas em minutos: " << horasMinutos << '\n';
    cout << "Total de minutos: " << totalMinutos << '\n';
    cout << "Total de segundos: " << totalSegundos << '\n';

    return 0;
}

// Completed
