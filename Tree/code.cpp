#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
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
        if(nodes[idx] == -1) return NULL;
        Node* currNode = new Node(nodes.at(idx));
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
    void buildTree(vector<int> nodes){
        idx = -1;
        root = buildTreeHelper(nodes);
    }
    // preorder traversal 
    void preorder(Node* node){ 
        if(root = NULL) {
            return;
        }
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
    void inorder(Node* node){ 
        if(root = NULL) {
            return;
        }
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    void postorder(Node* node){ 
        if(root = NULL) {
            return;
        }
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    void levelOrder(Node* node) {
        if(root == NULL) {
            return;
        }
        queue<Node*> q;
        q.push(node);
        q.push(NULL);
        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();
            if(curr == NULL) {
                cout << endl;
                if(q.empty()) {
                    return;
                }
                q.push(NULL);
            } else {
                cout << curr->data << " ";
                if(curr->left != NULL) {
                    q.push(curr->left);
                }
                if(curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }
    }

    int height(Node* node) {
        if(node == NULL) {
            return 0;
        }
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return max(leftHeight, rightHeight) + 1;
    }
    int countNode(Node* node) {
        if(node == NULL) {
            return 0;
        }
        int leftCount = countNode(node->left);
        int rightCount = countNode(node->right);
        return leftCount + rightCount + 1;
    }
    int sum(Node* node) {
        if(node == NULL) {
            return 0;
        }
        return sum(node->left) + sum(node->right) + node->data;
    }
};

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Tree t;
    t.buildTree(nodes);
    Node* root = t.getRoot();
    t.levelOrder(root);
    cout << t.sum(root) << endl;
    return 0;
}