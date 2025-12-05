#include <iostream>
#include <cmath> // Para cos()

using namespace std;

int main() {

    double angulo_graus, distancia_parede, angulo_radianos, medida_escada;
    constexpr double PI = 3.1415;

    // Entrada de dados
    cout << "Digite o angulo formado com o chao (em graus): ";
    cin >> angulo_graus;

    cout << "Digite a distancia da escada ate a parede (em metros): ";
    cin >> distancia_parede;

    // Conversão de graus para radianos
    angulo_radianos = angulo_graus * PI / 180.0;

    // Cálculo da medida da escada (hipotenusa)
    medida_escada = distancia_parede / cos(angulo_radianos);

    // Saída
    cout << "A medida da escada eh: " << medida_escada << " metros" << endl;

    return 0;
}

// Completed