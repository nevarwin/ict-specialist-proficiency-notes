/*
Let's the user inputs a number and guess from 1-10 
till they guess the right answer which is 8! Use a while loop 
to do the program, so they can guess up to 50 times.
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    int guess;
    int tries = 0;

    cout << "Guess the number: ";
    cin >> guess;

    while(guess != 8 && tries < 50){
        cout << "Wrong guess, try again: ";
        cin >> guess;

        tries++;
    }

    if(guess == 8){
        cout << "You are right!\n";
    }
}