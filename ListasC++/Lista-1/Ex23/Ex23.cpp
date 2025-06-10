#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float angulo_1{}, angulo_2{}, angulo_3{};

    cout << "Angulo 1: ";
    cin >> angulo_1;
    cout << "Angulo 2: ";
    cin >> angulo_2;
    
    angulo_3 = 180 - (angulo_1 + angulo_2);

    cout << "A medida do angulo 3 do triangulo eh: " << angulo_3;

    return 0;
}

// Completed