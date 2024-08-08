#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    string groceryList[SIZE];

    // Input: Enter grocery items
    cout << "Enter 10 items for your grocery list:" << endl;
    for(int i = 0; i < SIZE; ++i) {
        cout << "Item " << i + 1 << ": ";
        getline(cin, groceryList[i]);
    }

    // Output: Display the grocery list
    cout << "\nYour Grocery List:" << endl;
    for(int i = 0; i < SIZE; ++i) {
        cout << i + 1 << ". " << groceryList[i] << endl;
    }

    return 0;
}
