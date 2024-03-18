#include <fstream>
#include <iostream>

using namespace std;

int main() {
    // Using ofstream for output operations
    ofstream file("example.txt");

    if (file.is_open()) {
        // Write to file
        file << "Hello, World! asdfasdf";
        file.close();
    } else {
        cout << "Error opening file";
    }

    return 0;
}
