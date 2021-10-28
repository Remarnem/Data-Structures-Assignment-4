// Stack.h
// Joshua Steege
// Section 2
// Last modified: 10/28/2021

#ifndef ASSIGNMENT_4_STACK_H
#define ASSIGNMENT_4_STACK_H

#include <vector>

<template typename T>
class Stack {
private:
    std::vector<T> theStack;
public:
    void push(T data) {
        theStack.push_back(data);
    }
    void pop() {
        theStack.pop_back();
    }
    int size() {
        return theStack.size();
    }
    T top();
    void print();
};

#endif //ASSIGNMENT_4_STACK_H
