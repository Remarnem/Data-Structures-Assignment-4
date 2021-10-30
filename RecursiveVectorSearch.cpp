// RecursiveVectorSearch.cpp
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#include <iostream>
#include <vector>

std::vector<int> getNegative(std::vector<int> input);

int main() {
    // Creating vector
    std::vector<int> aVector;
    aVector.push_back(17);
    aVector.push_back(-11);
    aVector.push_back(5);
    aVector.push_back(7);
    aVector.push_back(-4);

    // Printing vector
    std::cout << "Original vector" << std::endl;
    for (auto i = 0; i < aVector.size(); ++i) {
        std::cout << aVector[i] << " ";
    }
    std::cout << std::endl;

    // Getting negative vector
    std::vector<int> negVector = getNegative(aVector);

    // Printing negative vector
    std::cout << "Negative vector:" << std::endl;
    for (auto i = 0; i < negVector.size(); ++i) {
        std::cout << negVector[i] << " ";
    }
    std::cout << std::endl;

}

std::vector<int> getNegative(std::vector<int> input) {
    std::vector<int> output;
    // Base case
    if (input.empty()) {
        return output;
    }
    // Save value at end of input
    int val = input.back();
    input.pop_back();
    // Recursive step
    output = getNegative(input);
    // If val is negative
    if (val < 0) {
        output.push_back(val);
    }
    // Return output
    return output;
}