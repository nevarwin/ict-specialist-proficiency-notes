/*
Let's the user input a number then add the all the numbers.
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    int iteration;
    int sum = 0;

    cout << "Enter how many number you want to add: ";
    cin >> iteration;

    for (int i = 1; i <= iteration; i++){
        cout << "Enter a number: ";
        cin >> num;     
        sum += num;
    }

    cout << "The sum of the numbers is: " << sum << endl;

}
