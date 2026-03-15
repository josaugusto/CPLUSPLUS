#include <iostream>
#include <iomanip>

/*
    4. Restaurant Bill
        Write a program that computes the tax and tip on a restaurant bill for a patron with
        a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
        be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
        amount, and total bill on the screen.
*/

int main() {
    constexpr double meal{ 88.67 };
    constexpr double taxRate{ 0.0675 };
    constexpr double taxAmount{ meal * taxRate };
    constexpr double subTotal{ taxAmount + meal };
    constexpr double tipAmount{ subTotal  * 0.20  };
    constexpr double totalBill{ subTotal + tipAmount  };
    
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "Meal cost: $" << meal << '\n';
    std::cout << "Tax amount: $" << taxAmount << '\n';
    std::cout << "Tip amount: $" << tipAmount << '\n';
    std::cout << "Total bill: $" << totalBill << '\n';

    return 0;
}

// Completed