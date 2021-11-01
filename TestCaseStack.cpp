// TestCaseStack.cpp
// Joshua Steege
// Section 2
// Last modified: 11/1/2021

#include <iostream>
#include "Stack.h"

int main() {
    std::cout << "Creating stack..." << std::endl;
    Stack<int> testStack;
    std::cout << "Pushing data to the stack..." << std::endl;
    testStack.push(1);
    testStack.push(4);
    testStack.push(2);
    std::cout << "Printing the stack..." << std::endl;
    testStack.print();
    std::cout << "Testing top()" << std::endl;
    std::cout << testStack.top() << std::endl;
    std::cout << "Testing pop()" << std::endl;
    testStack.pop();
    //std::cout << "Current stack:" << std::endl;
    testStack.print();
    std::cout << "Size of stack: " << testStack.size() << std::endl;
}