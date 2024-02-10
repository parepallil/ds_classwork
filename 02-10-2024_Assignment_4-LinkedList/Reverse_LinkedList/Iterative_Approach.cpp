#include <iostream>

// Node structure for the linked list
struct Node {
    int data;            // Data stored in the node
    Node* next;          // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize a node with given data
};

// Function to reverse a linked list iteratively
Node* reverseLinkedListIterative(Node* head) {
    Node* prev = nullptr;   // Pointer to the previous node
    Node* current = head;   // Pointer to the current node
    Node* next = nullptr;   // Pointer to the next node

    // Iterate through the list
    while (current != nullptr) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the next pointer of the current node
        prev = current;        // Move prev to the current node
        current = next;        // Move current to the next node
    }

    return prev;  // Return the new head of the reversed list
}

// Function to display a linked list
void displayLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";  // Print the data of the current node
        head = head->next;               // Move to the next node
    }
    std::cout << std::endl;  // Print a newline after printing all elements
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);  // Create the first node
    head->next = new Node(2);  // Create the second node
    head->next->next = new Node(3);  // Create the third node
    head->next->next->next = new Node(4);  // Create the fourth node
    head->next->next->next->next = new Node(5);  // Create the fifth node

    // Display the original linked list
    std::cout << "Original Linked List: ";
    displayLinkedList(head);

    // Reverse the linked list using the iterative approach
    Node* reversedHead = reverseLinkedListIterative(head);

    // Display the reversed linked list
    std::cout << "Reversed Linked List: ";
    displayLinkedList(reversedHead);

    // To free the memory allocated for the linked list
    while (reversedHead != nullptr) {
        Node* temp = reversedHead;  // Store the current node
        reversedHead = reversedHead->next;  // Move to the next node
        delete temp;  // Delete the current node
    }

    return 0;
}
/* EXPLANATION :
     In the reverseLinkedListIterative function, we initialize three pointers: prev, current, and next.
We iterate through the list one node at a time, updating the next pointers of each node to point to its previous node (prev).
After the traversal, prev will be pointing to the last node of the original list, which becomes the new head of the reversed list.
The reversed list is returned, and we can then display it or perform other operations.*/