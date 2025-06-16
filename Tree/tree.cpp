#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Tree {
private:
    Node* root;
    int idx;

    Node* buildTreeHelper(vector<int>& nodes) {
        idx++;
        if (nodes[idx] == -1) {
            return NULL;
        }
        Node* currNode = new Node(nodes[idx]);
        currNode->left = buildTreeHelper(nodes);
        currNode->right = buildTreeHelper(nodes);
        return currNode;
    }

public:
    Node* getRoot() {
        return root;
    }
    Tree() {
        root = NULL;
        idx = -1;
    }

    void buildTree(vector<int> nodes) {
        idx = -1;  // reset index every time we build a new tree
        root = buildTreeHelper(nodes);
    }

    void preorder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void postorder(Node* node) {
        if (node == NULL) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    void levelorder(Node* node) {
        if (node == NULL) return;
        queue<Node*> q;
        q.push(node);
        q.push(NULL);
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            if (curr == NULL) {
                cout << endl;
                if (q.empty()) break;
                q.push(NULL);
            } else {
                cout << curr->data << " ";
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
    }

    int height(Node* node) {
        if (node == NULL) return 0;
        return max(height(node->left), height(node->right)) + 1;
    }

    int countNode(Node* node) {
        if (node == NULL) return 0;
        return countNode(node->left) + countNode(node->right) + 1;
    }

    int sum(Node* node) {
        if (node == NULL) return 0;
        return sum(node->left) + sum(node->right) + node->data;
    }
};

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Tree tree;
    tree.buildTree(nodes);
    Node* root = tree.getRoot();

    cout << "Level Order Traversal:\n";
    tree.levelorder(tree.getRoot());

    cout << "Sum : " << tree.sum(root) << endl;
    cout << "Total Nodes : " << tree.countNode(root) << endl;
    cout << "Height : " << tree.height(root) << endl;

    cout << "Preorder: ";
    tree.preorder(root);
    cout << "\nInorder: ";
    tree.inorder(root);
    cout << "\nPostorder: ";
    tree.postorder(root);
    cout << endl;

    return 0;
}
