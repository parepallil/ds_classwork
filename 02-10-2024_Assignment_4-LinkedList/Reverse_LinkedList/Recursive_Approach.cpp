#include <iostream>

// Node structure for the linked list
struct Node {
    int data;            // Data stored in the node
    Node* next;          // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize a node with given data
};

// Function to reverse a linked list recursively
Node* reverseLinkedListRecursive(Node* head) {
    // Base case: empty list or single node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Recursively reverse the sublist starting from the second node
    Node* reversedHead = reverseLinkedListRecursive(head->next);

    // Adjust pointers to reverse the first node
    head->next->next = head;
    head->next = nullptr;

    return reversedHead; // New head of the reversed list
}

// Function to display a linked list
void displayLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " "; // Print the data of the current node
        head = head->next; // Move to the next node
    }
    std::cout << std::endl; // Print a newline after printing all elements
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1); // Create the first node
    head->next = new Node(2); // Create the second node
    head->next->next = new Node(3); // Create the third node
    head->next->next->next = new Node(4); // Create the fourth node
    head->next->next->next->next = new Node(5); // Create the fifth node

    // Display the original linked list
    std::cout << "Original Linked List: ";
    displayLinkedList(head);

    // Reverse the linked list using the recursive approach
    Node* reversedHead = reverseLinkedListRecursive(head);

    // Display the reversed linked list
    std::cout << "Reversed Linked List: ";
    displayLinkedList(reversedHead);

    // Freeing memory allocated for the linked list
    while (reversedHead != nullptr) {
        Node* temp = reversedHead; // Store the current node
        reversedHead = reversedHead->next; // Move to the next node
        delete temp; // Delete the current node
    }

    return 0;
}
/* EXPLANATION :
     In the reverseLinkedListRecursive function, we first check for the base case: if the list is empty or contains only one node, we simply return the head.
We recursively call the function to reverse the sublist starting from the second node, resulting in reversedHead pointing to the last node of the reversed sublist.
We then adjust the pointers to reverse the first node: the next pointer of the second node is set to point to the first node, and the next pointer of the first node is set to null.
The new head of the reversed list (reversedHead) is returned.The recursion continues until the entire list is reversed, and the reversed list is returned.*/