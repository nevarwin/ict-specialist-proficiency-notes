/*
Create a program that prints the verses of the "99 Bottles" song, 
using decrementing for loop.
*/

#include <iostream>
using namespace std;

int main(){
    for (int i = 99; i > 0; i--){
        cout << i << " bottle of beer on the wall.\n";
    }
}