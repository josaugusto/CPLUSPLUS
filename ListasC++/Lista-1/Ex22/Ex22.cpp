#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int n_lados{}, n_diagonais{};

    cout << "Lados do poligono: ";
    cin >> n_lados;

    n_diagonais = n_lados * (n_lados - 3) / 2;

    cout << "O numero de diagonais desse poligono eh: " << n_diagonais;

    return 0;
}

// Completed