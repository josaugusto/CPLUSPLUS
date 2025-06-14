#include <iostream>

using std::cout;
using std::cin;

/*
    Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre:
        a) a hora digitada convertida em minutos;
        b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
        c) o total dos minutos convertidos em segundos.
*/

int main()
{
    int hora{}, minutos{};

    cout << "Hora: ";
    cin >> hora;
    cout << "Minutos: ";
    cin >> minutos;

    int hora_em_minutos = hora * 60;
    int total_minutos = hora_em_minutos + minutos;
    int total_segundos = total_minutos * 60;

    cout << "Hora convertida em minutos: " << hora_em_minutos << '\n';
    cout << "Total de minutos: " << total_minutos << '\n';
    cout << "Total em segundos: " << total_segundos << '\n';


    return 0;
}

// Completed