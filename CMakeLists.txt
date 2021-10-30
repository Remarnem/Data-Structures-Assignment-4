cmake_minimum_required(VERSION 3.20)
project(Assignment_4)

set(CMAKE_CXX_STANDARD 14)

add_executable(CountTheOnes CountTheOnes.cpp )
add_executable(QueueTest TestCaseQueue.cpp Queue.h)
add_executable(StackTest TestCaseStack.cpp Stack.h)
add_executable(RecursiveVectorSearch RecursiveVectorSearch.cpp)
add_executable(UpdownRecursion UpDownRecursion.cpp)