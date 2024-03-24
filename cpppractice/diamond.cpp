#include <iostream>
using namespace std;

int main(){
    int row, space;

    cout << "Enter number of rows (odd only): ";
    cin >> row;

    if(row & 2 == 0){
        cout << "The number of rows should be odd\n";
        return 1;
    }

    space = row  / 2;

    for (int i = 1; i <= row; i += 2){
        for (int j = 1; j <= space; j++){
            cout << "_";
        }

        for (int k = 1; k <= i; k++){
            cout << "*";
        }

        cout << endl;
        space--;
    }

    space = 1;

    for (int i = row - 2 ; i >= 1 ; i -= 2){
        for (int j = 1; j <= space; j++){
            cout << "_";
        }

        for (int k = 1; k <= i; k++){
            cout << "*";
        }

        cout << endl;
        space++;
    }
}