// Task_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*4.Advanced: Optimization Challenge.
Challenge yourself to optimize the bubble sort algorithm.Provided with the partially sorted array `[1, 2,
3, 4, 5, 10, 9, 8, 7, 6] `. Optimize the algorithm to reduce the number of comparisons or swaps, making
the sorting process more efficient.*/

#include <iostream>
#include <vector>

void optimizedBubbleSort(std::vector<int>& arr) {
    int n = arr.size();

    // Outer loop for each pass
    for (int i = 0; i < n; ++i) {
        bool swapped = false; // Flag to check if any swap occurs in the current pass

        // Inner loop for comparisons and swaps
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if necessary
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Set the flag to true indicating a swap
            }
        }

        // If no swaps were made, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> arr = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };

    // Sorting the array using the optimized Bubble Sort
    optimizedBubbleSort(arr);

    // Printing the sorted array
    std::cout << "Optimized Sorted Array: ";
    for (const auto& element : arr) {
        std::cout << element << " ";
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
