#include <iostream>

using namespace std;

// Define a structure for a binary tree node
struct Node {
    int data;       // Data stored in the node
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child

    // Constructor to initialize the node with data
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to print the binary tree in inorder traversal
void printInorder(Node* root) {
    // Base case: if the root is null, return
    if (root == nullptr)
        return;

    // Recursively print the left subtree
    printInorder(root->left);

    // Print the data of the current node
    cout << root->data << " ";

    // Recursively print the right subtree
    printInorder(root->right);
}

// Function to delete the binary tree
void deleteTree(Node* root) {
    // Base case: if the root is null, return
    if (root == nullptr)
        return;

    // Recursively delete the left subtree
    deleteTree(root->left);

    // Recursively delete the right subtree
    deleteTree(root->right);

    // Delete the current node
    delete root;
}

int main() {
    // Create a binary tree with sample nodes
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    // Print the inorder traversal of the tree
    cout << "Inorder traversal of the tree: ";
    printInorder(root);
    cout << endl;

    // Deleting the tree to free memory
    deleteTree(root);

    return 0;
}
