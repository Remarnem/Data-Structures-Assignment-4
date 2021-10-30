// TestCaseQueue.cpp
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#include <iostream>
#include "Queue.h"

int main() {
    Queue<int> testQueue;
    testQueue.enqueue(1);
    testQueue.enqueue(4);
    testQueue.enqueue(2);
    testQueue.print();

    std::cout << "Front of queue: " << testQueue.first() << std::endl;

    testQueue.dequeue();

    testQueue.print();
}