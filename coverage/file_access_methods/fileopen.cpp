#include <fstream>
#include <iostream>

using namespace std;

int main() {
    // Using fstream for both reading and writing
    fstream file("example.txt", ios::in | ios::out | ios::app);

    if (file.is_open()) {
        // File operations here
        file << "Hello, World!";
        file.close();
    } else {
        cout << "Error opening file";
    }

    return 0;
}
