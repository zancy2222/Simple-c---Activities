#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    string itemName;
    float itemPrice;
    int quantity;
    float payment, totalCost, change;

    // Input: Getting item details
    cout << "Enter Item Name: ";
    getline(cin, itemName);
    cout << "Enter Item Price: ";
    cin >> itemPrice;
    cout << "Enter Quantity: ";
    cin >> quantity;

    // Calculate total cost
    totalCost = itemPrice * quantity;

    // Display the total cost
    cout << fixed << setprecision(2); // To display the price in two decimal places
    cout << "The price of " << itemName << " is: " << totalCost << endl;

    // Input: Payment amount
    cout << "Enter Payment Amount: ";
    cin >> payment;

    // Calculate and display change
    change = payment - totalCost;
    cout << "Your change is: " << change << endl;

    return 0;
}
