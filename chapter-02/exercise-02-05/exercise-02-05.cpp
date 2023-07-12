// Program to calculate the product of three integers.

#include <iostream>     // Enables program to perform input and output.

using namespace std;    // Program uses names from the std namespace

// Function main begins program execution.
int main()
{
    int factor1{0};    // First integer to multiply.
    int factor2{0};    // Second integer to multiply
    int factor3{0};    // Third integer to multiply
    
    cout << "Enter three integers: ";        // Prompt user for data.
    cin >> factor1 >> factor2 >> factor3;    // Read in data from user.
    
    int product{0};    // The product of the three integers.
    
    product= factor1 * factor2 * factor3;           // Multiplication.
    cout << "The product is " << product << endl;   // Present the product.
}    // Function main ends.
