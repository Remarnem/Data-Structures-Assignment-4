// Queue.h
// Joshua Steege
// Section 2
// Last modified: 10/29/2021

#ifndef ASSIGNMENT_4_QUEUE_H
#define ASSIGNMENT_4_QUEUE_H

#include <vector>

template <typename T>
class Queue {
private:
    std::vector<T> theQueue;
public:
    // Adds data to the beginning of queue
    void enqueue(T data) {
        theQueue.insert(theQueue.begin(), data);
    }
    // Removes the element at the end of the queue
    void dequeue() {
        theQueue.pop_back();
    }
    // Returns the size
    int size() {
        return theQueue.size();
    }
    // Returns the value of the element at the front of the queue
    T first() {
        return theQueue.back();
    }
    // Print function for testing
    void print() {
        std::cout << "The queue: " << std::endl;
        for (auto i = 0; i < theQueue.size(); ++i) {
            std::cout << theQueue[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif //ASSIGNMENT_4_QUEUE_H
