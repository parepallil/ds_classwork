#include <iostream>
#include <queue>

using namespace std;

// Function to print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;

    // Iterate through the queue and print each element
    while (!g.empty()) {
        cout << '\t' << g.front();  // Print the front element of the queue
        g.pop();  // Remove the front element
    }
    cout << '\n';  // Move to the next line after printing all elements
}

// Driver Code
int main()
{
    // Create a queue and initialize it with elements
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Display the original queue
    cout << "The queue gquiz is : ";
    showq(gquiz);

    // Display the size of the queue
    cout << "\ngquiz.size() : " << gquiz.size();

    // Display the front and back elements of the queue
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    // Remove an element from the front of the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Display the modified queue after popping an element
    showq(gquiz);

    return 0;
}