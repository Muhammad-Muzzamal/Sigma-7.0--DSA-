#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *right, *left;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};
Node* insert(Node* node, int data) {
    Node* newNode = new Node(data);
    if (node == NULL) {
        return node = newNode;
    }
    if(node->data > data) {
        node->left = insert(node->left, data);
    } else {
        node->right = insert(node->right, data);
    }
    return node;
} 
void inorder(Node* root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
bool search(Node* root, int target) {
    if(root != NULL) {
        if(root->data == target) {
            return true;
        }
        if(root->data > target) {
            search(root->left, target);
        } else {
            search(root->right, target);
        }
    }
}

Node *getSuccessor(Node* node) {
    node = node->right;
    while(node != NULL && node->left != NULL) {
        node = node->left;
    }
    return node;
}

Node* delNode(Node* root, int target) {

    if(root == NULL) {
        return root;
    }

    if(root->data > target) {
        root->left = delNode(root->left, target);
    } else if(root->data < target) {
        root->right = delNode(root->right, target);
    } else {
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* succ =  getSuccessor(root);
        root->data = succ->data;
        root->right = delNode(root->right, succ->data);
    }

    return root;
}

int main() {
    cout << "Program Stated.." << endl;
    Node* root = NULL;
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    inorder(root);
    cout << endl;
    delNode(root, 40);
    inorder(root);
    return 0;
}