// TestCaseQueue.cpp
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#include <iostream>
#include "Queue.h"

int main() {
    std::cout << "Creating queue..." << std::endl;
    Queue<int> testQueue;
    std::cout << "Adding data to the queue..." << std::endl;
    testQueue.enqueue(1);
    testQueue.enqueue(4);
    testQueue.enqueue(2);
    std::cout << "Printing the queue..." << std::endl;
    testQueue.print();
    std::cout << "Testing first()" << std::endl;
    std::cout << testQueue.first() << std::endl;
    std::cout << "Testing dequeue()" << std::endl;
    testQueue.dequeue();
    std::cout << "Current queue:" << std::endl;
    testQueue.print();
    std::cout << "Size of stack: " << testQueue.size() << std::endl;
}