#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printPostorder(Node* root) {

    if (root == nullptr)

        return;

    printPostorder(root->left);

    printPostorder(root->right);

    cout << root->data << " ";



}


int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    cout << "Preorder traversal of the tree: ";
    printPostorder(root);
    cout << endl;

    // Remember to free the memory allocated for nodes
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}