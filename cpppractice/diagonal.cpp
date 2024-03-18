// Write a program that outputs a diagonal pattern using an *. 
// Use an && or || logical operators.
#include <iostream>
using namespace std;

int main () {
	int range;
	
	cout << "Enter a number: ";
	cin >> range;

	for (int i = 1; i <= range; i++){
		for (int j = 1; j <= i; j++){
			if(j == 1 || j == i || i == range){
				cout << "+";
			} else {
				cout << "-";
			}
		}
		cout << endl;
	}
}