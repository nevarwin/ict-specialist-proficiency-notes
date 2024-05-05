#include <iostream>
using namespace std;

int main() {
    int marks[5];
	int n;
	int sum = 0;
	int average;

	cout << "enter: ";
    cin >> n;

	if (n > 5){
		cout << "must not greater than 5";
		return 0;
	}

	for (int i = 0; i < n; i++){
        cin >> marks[i];

		sum += marks[i];
	}

	average = sum / n;
	cout << "average: " << average;

	return 0;
}