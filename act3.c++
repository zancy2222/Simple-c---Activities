#include <iostream>
using namespace std;

int main() {
    int numbers[2][3];

    // Input: Enter 6 numbers
    cout << "Enter 6 numbers:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> numbers[i][j];
        }
    }

    // Output: Display the numbers with their indices
    cout << "The numbers are:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }

    return 0;
}
