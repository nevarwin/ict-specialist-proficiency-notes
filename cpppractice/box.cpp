#include <iostream>

int main(){
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    for ( int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}