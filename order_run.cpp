#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Pre-order Traversal: Root → Left → Right
void preorder(Node* root){
  if(root == NULL)return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
// In-order Traversal: Left → Root → Right
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);   
    cout << root->data << " ";
    inorder(root->right);
}
// Post-order Traversal: Left → Right → Root
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
   
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Pre-order Traversal: ";
    preorder(root);
    cout << endl;

    cout << "In-order Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
