////////////////////////////////////////////////////////////////////////////////
// Application that calculates the product of the multiple of 3
//
// Products that are multiple of 3 are calculated for the range 3 to 50 and
// presented in the terminal window.
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    int multiplicand = 3; // Will calculate multiples of this multiplicand.
    int multiplier = 1;   // Tracks what multiplier to use for next calculation.
    int product = 3;      // Storage for multiplication result.
    int upper_range = 50; // The upper range limit that will end the calculation.

    while (product <= upper_range)
    {
        // First present the result of the previous calculation.
        std::cout << multiplicand << " x "
                  << multiplier << " = "
                  << product << "\n";

        // Then calculate the next consecutive product.
        ++multiplier;
        product = multiplicand * multiplier;
    }

    return 0;
}
