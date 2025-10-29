#include <iostream>
#include <iomanip>

using namespace std;

/*
    8. Total Purchase

        A customer in a store is purchasing five items. The prices of the five items are as follows:

            Price of item 1 = $15.95
            Price of item 2 = $24.95
            Price of item 3 = $6.95
            Price of item 4 = $12.95
            Price of item 5 = $3.95

        Write a program that holds the prices of the five items in five variables. Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent.
*/

int main()
{
    constexpr double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;

    cout << "Price of item 1 = " << item1 << "\nPrice of item 2 = " << item2 << "\nPrice of item 3 = " << item3 << 
    "\nPrice of item 4 = " << item4 << "\nPrice of item 5 = " << item5 << '\n';

    double subtotal = item1 + item2 + item3 + item4 + item5;

    double totalTax = subtotal * 0.07;

    double total = subtotal + totalTax;

    cout << fixed << showpoint << setprecision(2);
    cout << "Subtotal = $" << subtotal << '\n';
    cout << "Total Tax = $" << totalTax << '\n';
    cout << "Total = $" << total << '\n';

    return 0;
}

// Completed