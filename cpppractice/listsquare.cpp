/*
calculate and print a simple list of squares of each numbers.
*/
#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i < 10){
    square = i * i;
    std::cout << i << "   " << square << "\n";
    i++;
  }
  
}