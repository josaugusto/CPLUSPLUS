#include <iostream>
#include <array>

/*
    4. More Positives Than Negatives
        Write a function that accepts two arguments: an array of integers and its size. The
        function should return a Boolean indicating whether the array contains more positive
        numbers than negative numbers, not including zeros. Test the function in a program.
*/

bool numbers(double array[], int size);

int main() {
    const int SIZE{ 10 };
    double array[SIZE] = { 10, 2, 3, 5, 7, -4, 2, 5, 8, 6 };

    std::cout << std::boolalpha;
    std::cout << numbers(array, SIZE);

    return 0;
}

bool numbers(double array[], int size) {
    int positiveCount{}, negativeCount{};

    for (int i = 0; i < size; i++) {
        if (array[i] > 0.0) {
            positiveCount++;
        }
        else if (array[i] < 0.0) {
            negativeCount++;
        }
    }
    
    return positiveCount > negativeCount;
}

// Completed