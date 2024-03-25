#include <iostream>

int main() {
    int marks[5];
	int n;
	int sum = 0;
	int average;

	std::cout << "enter: ";
    std::cin >> n;

	if (n > 5){
		std::cout << "must not greater than 5";
		return 0;
	}

	for (int i = 0; i < n; i++){
        std::cin >> marks[i];

		sum += marks[i];
	}

	average = sum / n;
	std::cout << "average: " << average;

	return 0;
}