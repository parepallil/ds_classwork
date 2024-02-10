#include <iostream>

// Node structure for the linked list
struct Node {
    int data;            // Data stored in the node
    Node* next;          // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize a node with given data
};

// Function to find the length of a linked list iteratively
int findLengthIterative(Node* head) {
    int length = 0;            // Initialize the length of the linked list
    while (head != nullptr) {  // Loop until the end of the list is reached
        length++;              // Increment the length for each node encountered
        head = head->next;     // Move to the next node
    }
    return length;             // Return the length of the linked list
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);                      // Create the first node
    head->next = new Node(2);                      // Create the second node
    head->next->next = new Node(3);                // Create the third node
    head->next->next->next = new Node(4);          // Create the fourth node
    head->next->next->next->next = new Node(5);    // Create the fifth node

    // Find the length of the linked list using the iterative approach
    int length = findLengthIterative(head);        // Call the function to find the length
    std::cout << "Length of the linked list: " << length << std::endl; // Print the length

    // Freeing memory allocated for the linked list
    while (head != nullptr) {                      // Loop until all nodes are deleted
        Node* temp = head;                         // Store the current node in a temporary variable
        head = head->next;                         // Move to the next node
        delete temp;                               // Delete the current node
    }

    return 0;  // Exit the program
}
/* EXPLANATION :
    In the findLengthIterative function, we initialize a variable length to store the length of the linked list 
    and set it to 0.We then traverse the linked list using a while loop, incrementing 
    the length variable for each node encountered.When the end of the list is reached 
    (i.e., head becomes nullptr), we return the length, which represents the length of 
    the linked list.
*/