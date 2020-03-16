cmake_minimum_required(VERSION 3.14)
project(2020-algorithm-code)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

add_executable(BubbleSort algorithm/sorting/BubbleSort.cpp )


add_executable(ListNode jkLeetCode/basedata/ListNode.cpp)
add_executable(ReverseLinkedList jkLeetCode/array&list/ReverseLinkedList.cpp )