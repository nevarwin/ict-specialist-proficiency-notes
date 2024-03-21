#include <iostream>
using namespace std;

int main(){
    int row = 3;

    for (int i = 0; i < row; i++){
        
        for (int k = row - 1; k > i; k--){
            cout << "_";
        }
        for (int j = 0; j <= i; j++){
            cout << "*";
        }

        for (int j = 0; j <= i; j++){
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < row; i++){
        
        for (int k = 0; k < i; k++){
            cout << "_";
        }
        for (int j = i; j < row; j++){
            cout << "*";
        }

        

        for (int j = i; j < row; j++){
            cout << "*";
        }

        cout << endl;
    }
}
