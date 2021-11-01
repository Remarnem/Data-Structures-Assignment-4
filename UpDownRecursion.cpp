// UpDownRecursion.cpp
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#include <iostream>

void printBetween(int x, int y);

int main() {

    std::cout << std::endl;
    std::cout << "Testing with x = 10, y = 15:" << std::endl;
    printBetween(10, 15);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Testing with x = 11, y = 22:" << std::endl;
    printBetween(11, 22);
    std::cout << std::endl;

}

void printBetween(int x, int y) {
    // Input validation
    if (x > y) {
        std::cout << "x > y, escaping function.";
        return;
    }
    // Base case
    if (x == y) {
        std::cout << x << " ";
        return;
    }
    // Printing
    std::cout << x << " ";
    printBetween(x+1, y);
    std::cout << x << " ";
}