// Stack.h
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#ifndef ASSIGNMENT_4_STACK_H
#define ASSIGNMENT_4_STACK_H

#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> theStack;
public:
    // Adds an element to the top of the stack
    void push(T data) {
        theStack.push_back(data);
    }
    // Removes the element at the top of the stack
    void pop() {
        theStack.pop_back();
    }
    // Returns the number of elements in the stack
    int size() {
        return theStack.size();
    }
    // Returns the value of the element at the top of the stack
    T top() {
        return theStack.back();
    }
    // Print function for testing
    void print() {
        std::cout << "The stack: " << std::endl;
        for (auto i = theStack.size(); i > 0; --i) {
            std::cout << theStack[i - 1] << std::endl;
        }
    }
};

#endif //ASSIGNMENT_4_STACK_H
