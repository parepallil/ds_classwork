#include <iostream>

// Node structure for the linked list
struct Node {
    int data;            // Data stored in the node
    Node* next;          // Pointer to the next node
    Node(int val) : data(val), next(nullptr) {} // Constructor to initialize a node with given data
};

// Linked_List class
class Linked_List {
public:
    // Constructor to initialize the linked list with an empty head
    Linked_List() : head(nullptr) {}

    // Method to append a new node with given data to the end of the linked list
    void append(int data) {
        Node* new_node = new Node(data); // Create a new node with the given data
        if (head == nullptr) { // If the list is empty, set the new node as the head
            head = new_node;
            return;
        }
        Node* last_node = head;
        while (last_node->next) { // Traverse the list to find the last node
            last_node = last_node->next;
        }
        last_node->next = new_node; // Append the new node to the end of the list
    }

    // Method to print the elements of the linked list
    void print_list() {
        Node* current = head; // Start from the head of the list
        while (current) { // Loop until the current node is not null
            std::cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        std::cout << std::endl; // Print a newline after printing all elements
    }

    // Method to search for an element in the linked list iteratively
    bool search_iterative(int target) {
        Node* current = head; // Start from the head of the list
        while (current != nullptr) { // Loop until the current node is not null
            if (current->data == target) { // If the current node contains the target data, return true
                return true;
            }
            current = current->next; // Move to the next node
        }
        return false; // If the target is not found, return false
    }

    // Method to search for an element in the linked list recursively
    bool search_recursive(Node* node, int target) {
        if (node == nullptr) { // Base case: If the current node is null, return false
            return false;
        }
        if (node->data == target) { // If the current node contains the target data, return true
            return true;
        }
        return search_recursive(node->next, target); // Recursive call to search in the next node
    }

    // Getter method to access the head of the linked list
    Node* get_head() {
        return head;
    }

private:
    Node* head; // Pointer to the head of the linked list
};

// Demonstration
int main() {
    // Create a linked list
    Linked_List linked_list;
    linked_list.append(1);
    linked_list.append(2);
    linked_list.append(3);
    linked_list.append(4);
    linked_list.append(5);

    // Print the linked list
    std::cout << "Linked List:" << std::endl;
    linked_list.print_list();

    // Search for an element using iterative approach
    int target_element = 3;
    if (linked_list.search_iterative(target_element)) {
        std::cout << target_element << " found using iterative approach" << std::endl;
    }
    else {
        std::cout << target_element << " not found using iterative approach" << std::endl;
    }

    // Search for an element using recursive approach
    if (linked_list.search_recursive(linked_list.get_head(), target_element)) {
        std::cout << target_element << " found using recursive approach" << std::endl;
    }
    else {
        std::cout << target_element << " not found using recursive approach" << std::endl;
    }

    return 0;
}
//Explanation:-
/*This code defines a linked list with nodes containing integer data.
The searchIterative function iteratively searches for a target element in the linked 
listand returns true if found, otherwise false.

By overall, the code demonstrates the basic operations of creating a linked list,
appending elements, printing the list, and searching for elements using both 
iterative and recursive approaches.*/