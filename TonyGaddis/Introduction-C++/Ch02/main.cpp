#include <iostream>
#include <iomanip>

using namespace std;

/*
    2. The Golden Ratio
        The golden ratio is a ratio that appears in nature and produces pleasing, harmonious
        proportions. For rectangles, if the width is approximately 1.62 times the height, they
        will be in this ratio. Write a program that calculates the appropriate width for a rectangle
        with height 5 cm so that it fulfills this ratio.
*/

int main()
{
    constexpr double width{ 1.62 * 5.00 };

    cout << fixed << showpoint << setprecision(2);

    cout << "Width for a rectangle with height 5 cm is: " << width << " cm\n";

    return 0;
}

// Completed