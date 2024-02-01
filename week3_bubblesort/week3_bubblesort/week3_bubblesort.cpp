// week3_bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
// this  program bubble sort is for descending order
int main() {
    // Initialize an array
    int a[] = { 8, 7, 6, 5, 4, 3, 2, 1 };

    // Calculate the length of the array
    int getArrayLength = sizeof(a) / sizeof(int);

    // Bubble Sort algorithm
    for (int i = 0; i < getArrayLength; i++) {
        // Inner loop to traverse the array and compare adjacent elements
        for (int j = 0; j < getArrayLength - 1; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
     cout << "Sorted Array: ";
    for (int i = 0; i < getArrayLength; i++) {
        cout << a[i] << " ";
    }

    // This program of bubble sort is for ascending  order
     // Initialize an array
    int a[] = { 8, 7, 6, 5, 4, 3, 2, 1 };

    // Calculate the length of the array
    int getArrayLength = sizeof(a) / sizeof(int);

    // Bubble Sort algorithm
    for (int i = 0; i < getArrayLength; i++) {
        for (int j = 0; j < getArrayLength - 1 - i; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < getArrayLength; i++) {
        cout << a[i] << " ";
    }

}
