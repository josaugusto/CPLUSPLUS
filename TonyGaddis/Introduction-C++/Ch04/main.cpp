#include <iostream>
#include <iomanip>

/*
    4. Restaurant Bill
        Write a program that computes the tax and tip on a restaurant bill for a patron with
        a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
        be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
        amount, and total bill on the screen.
*/

int main()
{
    constexpr float meal{ 88.67f };
    constexpr float taxRate{ 0.0675f };
    constexpr float taxAmount{ meal * taxRate };
    constexpr float subTotal{ taxAmount + meal };
    constexpr float tipAmount{ subTotal  * 0.20  };
    constexpr float totalBill{ subTotal + tipAmount  };
    
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Meal cost: $" << meal << '\n';
    std::cout << "Tax amount: $" << taxAmount << '\n';
    std::cout << "Tip amount: $" << tipAmount << '\n';
    std::cout << "Total bill: $" << totalBill << '\n';

    return 0;
}

// Completed