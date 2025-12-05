#include <iostream>

using std::cout, std::cin;

// 18. Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Sabe-se que: F = (C × 9/5) + 32

int main()
{
    float celcius{}, fahrenheit{};

    cout << "Qual eh a temperatura em celcius(C)? ";
    cin >> celcius;

    fahrenheit = (celcius * 9.0f/5.0f) + 32;

    cout << "A temperatura em fahrenheit eh: " << fahrenheit << " F";

    return 0;
}

// Completed