#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 5; i++){
        num  *= 10;
        cout << num << endl;
    }
}