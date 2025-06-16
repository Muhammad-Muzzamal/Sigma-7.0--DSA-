#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    Node *left;
    Node *right;
    int data;
    Node(int val) {
        left = right = NULL;
        data = val;
    }
};
static int idx = -1;
void insert(int val) {
}

Node* buildTree(vector<int> vec) {
    idx++;
    if(vec.at(idx) == -1) {
        return NULL;
    }
    Node* currNode =new Node(vec.at(idx));
    currNode->left = buildTree(vec);
    currNode->right = buildTree(vec);

    return currNode;
}

void preorder(Node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(node);
    preorder(root);
    return 0;
}