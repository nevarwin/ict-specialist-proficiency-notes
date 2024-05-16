#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for half the diamond: ";
    cin >> n;

    // Print the upper half of the diamond including the middle row
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print spaces
        for (int j = n; j > i; --j) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
