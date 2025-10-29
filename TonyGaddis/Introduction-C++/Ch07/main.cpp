#include <iostream>
#include <iomanip>

using namespace std;

/*
    7. Ocean Levels

        Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

        The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

        The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

        The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
*/

int main()
{

    float millimetersPerYear{ 1.5 };

    cout << fixed << showpoint << setprecision(2);

    cout << "In 5 years, the ocean level will be " << millimetersPerYear * 5 << " millimeters higher.\n";
    cout << "In 7 years, the ocean level will be " << millimetersPerYear * 7 << " millimeters higher.\n";
    cout << "In 10 years, the ocean level will be " << millimetersPerYear * 10 << " millimeters higher.\n";

    return 0;
}

// Completed