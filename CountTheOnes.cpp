// CountTheOnes.cpp
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#include <iostream>

uint64_t countTheOnes(uint64_t input);

int main() {
    // Variable to store user input
    uint64_t value;
    // Getting user input
    std::cout << "Enter a number to count the 1's of" << std::endl;
    std::cin >> value;
    // Printing result
    std::cout << "In the binary representation of " << value << " there are \'"
    << countTheOnes(value) << "\' 1's." << std::endl;
}

uint64_t countTheOnes(uint64_t input) {
    // Base cases
    if (input < 2 && input > 0) {
        return 1;
    } else if (input == 0) {
        return 0;
    }
    // Checks if current number is divisible by 2 (if the last bit is a 1)
    if (input % 2 == 1) {
        return 1 + countTheOnes(input / 2);
    } else {
        return countTheOnes(input / 2);
    }
}