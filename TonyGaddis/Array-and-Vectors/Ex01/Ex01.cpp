#include <iostream>
#include <array>

/*
    1. Largest and Second Largest Even Numbers
        Write a program to input 15 integers into an array. The program should then display
        the largest and second largest even numbers in the array.
*/

int main() {
    std::array<int, 15> numbers = {};
    int firstLargest{}, secondLargest{};
    
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << i + 1 << " : ";
        std::cin >> numbers[i];

        if (numbers[i] % 2 == 0) {
            if (numbers[i] > firstLargest) {
                secondLargest = firstLargest;
                firstLargest = numbers[i];
            }
            else if (numbers[i] > secondLargest) {
                secondLargest = numbers[i];
            }
        }
    }

    std::cout << "First Largest is " << firstLargest << '\n';
    std::cout << "Second Largest is " << secondLargest << '\n';
    
    return 0;
}

// Completed