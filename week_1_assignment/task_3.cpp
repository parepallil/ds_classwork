// task_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//3.Code Implementation
//Implement the bubble sort algorithm in C++.Provide them with the following unsorted array: `[3, 6, 1, 8,
//Code from scratchand test it to ensure it works correctly.


#include <iostream>
using namespace std;
void print_array(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void bubblesort(int a[], int n)
{
	int c;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
		cout << "\nPass" << i + 1 << ": ";
		print_array(a, n);
	}
}
int main()
{
	const int maxsize = 100;
	int a[maxsize]; // declaring an array
	int n;
	cout << "Enter the no. of elements in the array: ";
	cin >> n;
	// taking the elements dynamically into the array
	for (int i = 0; i < n; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "The given array is: ";
	print_array(a, n);
	cout << "\nSorting started:";
	bubblesort(a, n);
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
