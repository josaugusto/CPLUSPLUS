#include <iostream>
#include <iomanip>

using namespace std;

/*
    5. Pounds to Kilograms
        The SI system of units is an internationally agreed decimal system of measurement that
        uses the kilogram as the unit of weight. Earlier systems used different units, such as
        the stone. In 1835, the United Kingdom defined the stone as weighing 14 pounds, or
        6.35 kg. Write a program that stores your personal weight in pounds in a variable and
        calculates and displays your weight in both stones and kilograms.
*/

int main()
{
    constexpr double weightPounds{ 166.11831 }; // 75.35 kg
    constexpr double weightStones{ weightPounds / 14 };
    constexpr double weightKilograms{ weightStones * 6.35 };

    cout << fixed << showpoint << setprecision(2);
    cout << "Weight Stones: " << weightStones << " stones\n";
    cout << "Weight Kilograms: " << weightKilograms << " kilograms\n";

    return 0;
}

// Completed