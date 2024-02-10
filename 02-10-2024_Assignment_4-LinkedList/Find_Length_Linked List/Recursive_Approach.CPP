#include <iostream>

// Node structure for the linked list
struct Node {
    int data;            // Data stored in the node
    Node* next;          // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize a node with given data
};

// Function to find the length of a linked list recursively
int findLengthRecursive(Node* head) {
    // Base case: if head is null, return 0
    if (head == nullptr) {
        return 0;
    }
    // Recursive case: return 1 plus the length of the sublist starting from the next node
    return 1 + findLengthRecursive(head->next);
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);                      // Create the first node
    head->next = new Node(2);                      // Create the second node
    head->next->next = new Node(3);                // Create the third node
    head->next->next->next = new Node(4);          // Create the fourth node
    head->next->next->next->next = new Node(5);    // Create the fifth node

    // Find the length of the linked list using the recursive approach
    int length = findLengthRecursive(head);        // Call the function to find the length
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
     In the findLengthRecursive function, we first check if the current node (head) is null. If it is null, we return 0, indicating the base case (i.e., the end of the list).
If the current node is not null, we recursively call the function with the next node (head->next) and add 1 to the result, indicating the length of the sublist starting from the current node.
The recursion continues until we reach the end of the list, and the lengths of all sublists are summed up to find the total length of the linked list.*/