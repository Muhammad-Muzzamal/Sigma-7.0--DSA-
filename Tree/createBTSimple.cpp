#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left, *right;
    Node(int d) {
        data = d;
    }
};
int main() {
    Node* firstNode = new Node(2);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(4);
    Node* forthNode = new Node(5);

    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = forthNode;

    return 0;
}