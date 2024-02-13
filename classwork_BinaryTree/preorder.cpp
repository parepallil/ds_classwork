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

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node();    // Allocate memory for a new node
    newNode->data = data;          // Assign data to the new node
    newNode->left = newNode->right = nullptr; // Initialize left and right pointers as null
    return newNode;                // Return the newly created node
}

// Function to print the binary tree in preorder traversal
void printPreorder(Node* root) {
    // Base case: if the root is null, return
    if (root == nullptr)
        return;

    // Print the data of the current node
    cout << root->data << " ";

    // Recursively print the left subtree
    printPreorder(root->left);

    // Recursively print the right subtree
    printPreorder(root->right);
}

int main() {
    // Create a binary tree with sample nodes
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    // Print the preorder traversal of the tree
    cout << "Preorder traversal of the tree: ";
    printPreorder(root);
    cout << endl;

    // Remember to free the memory allocated for nodes
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
