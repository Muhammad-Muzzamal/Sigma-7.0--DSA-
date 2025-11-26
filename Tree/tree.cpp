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
    bool BSTSearch(Node* node, int key) {
        if(node == NULL) {
            return 0;
        }
        if (node->data == key) {
            return 1;
        } else {
            if(node->data < key) {
                BSTSearch(node->right, key);
            } else {
                BSTSearch(node->right, key);
            }
        }
    }
    void insertBST(int val) {
        root = insertBST(root, val);
    }
    
    Node* insertBST(Node* node, int val) {
        Node* newNode = new Node(val);
        if (node == NULL) {
            return node = newNode;
        } else {
            if(val > node->data) {
                node->right = insertBST(node->right, val);
            } else {
                node->left =insertBST(node->left, val);
            }
        }
        return node;
    }
    Node* successor(Node* root) {
        root = root->right;
        while(root != NULL && root->left != NULL) {
            root = root->left;
        }
        return root;
    }
    Node* delNode(Node* root, int target) {
        // base case 
        if(root == NULL) {
            return root;
        }
        if(root->data > target) {
            root->left = delNode(root->left, target);
        }
        else if(root->data < target) {
            root->right = delNode(root->right, target);
        }
        else {
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
            Node* succ = successor(root);
            root->data = succ->data;
            root->right = delNode(root->right, succ->data);

        }

    }
    

};

int main() {
    Tree t;
    t.insertBST(20);
    t.insertBST(100);
    t.insertBST(10);
    t.inorder(t.getRoot());
    

    return 0;
}
