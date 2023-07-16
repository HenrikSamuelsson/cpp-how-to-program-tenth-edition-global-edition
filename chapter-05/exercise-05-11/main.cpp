// Application that finds the smallest of several integers.
//
// First value read is interpreted as the number of values the user will enter.
// The user is then expected to enter integer values. The smallest value that 
// the user entered is presented after the user have entered the specified
// number of integer values.

#include <iostream>
#include <limits> 

int main() {
    int numberOfValues = 0;
    std::cin >> numberOfValues;

    int smallestValue;
    std::cin >> smallestValue;
    
    for (int i = 1; i < numberOfValues; i++) {
      int inputValue;
      std::cin >> inputValue;
      if (smallestValue > inputValue) {
        smallestValue = inputValue;
      }
    }

    std::cout << smallestValue << "\n";
}
