#include <iostream>
using namespace std;

int main() {
    double totalAmount, salesTax, finalAmount;

    cout << "Enter total purchase amount: ";
    cin >> totalAmount;

    salesTax = totalAmount * 0.06;      // 6% of total
    finalAmount = totalAmount + salesTax;

    cout << "Sales tax (6%) = " << salesTax << endl;
    cout << "Total amount with tax = " << finalAmount << endl;

    return 0;
}

