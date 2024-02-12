#include <iostream>

using namespace std;

// Node structure for a binary tree
struct Node {
    int data;       // Data stored in the node
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child
};

// Function to create a new node with given data
Node* createNode(int data) {
    // Dynamically allocate memory for a new node
    Node* newNode = new Node();
    // Set the data of the new node
    newNode->data = data;
    // Initialize left and right pointers to nullptr
    newNode->left = newNode->right = nullptr;
    // Return the pointer to the new node
    return newNode;
}

// Function to perform a preorder traversal of the binary tree
void printPreorder(Node* root) {
    // Base case: if the root is nullptr, return
    if (root == nullptr)
        return;
    // Print the data of the current node
    cout << root->data << " ";
    // Recursive call to traverse the left subtree
    printPreorder(root->left);
    // Recursive call to traverse the right subtree
    printPreorder(root->right);
}

// Main function
int main() {
    // Create the root node with data 1
    Node* root = createNode(1);
    // Create left and right children of the root node
    root->left = createNode(2);
    root->right = createNode(3);
    // Create a left child of the left child of the root node
    root->left->left = createNode(4);

    // Print the preorder traversal of the binary tree
    cout << "Preorder traversal of the tree: ";
    printPreorder(root);
    cout << endl;

    // Free dynamically allocated memory to prevent memory leaks
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
