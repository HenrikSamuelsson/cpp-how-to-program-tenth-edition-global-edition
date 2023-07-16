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
