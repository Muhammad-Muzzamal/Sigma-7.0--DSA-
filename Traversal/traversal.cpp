#include <iostream>
using namespace std;
void inorder(root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void levelorder(int root) {
    
}
int main() {
    
    return 0;
}