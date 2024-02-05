// week3_stacks.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> stack;

    // Push various values onto the stack
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    // Declare an integer variable 'num' and push its value onto the stack
    int num = 0;
    stack.push(num);

    // Pop three elements from the stack
    stack.pop(); // Removes the top element (25)
    stack.pop(); // Removes the next element (24)
    stack.pop(); // Removes the next element (22)

    // Print the remaining elements in reverse order
    cout << "Remaining elements in reverse order: ";
    while (!stack.empty()) {
        cout << stack.top() << " "; // Print the top element of the stack
        stack.pop(); // Remove the top element from the stack
    }

    return 0;
}




