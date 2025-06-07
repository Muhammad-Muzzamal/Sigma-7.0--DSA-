#include <iostream>
using namespace std;
// singly linke list 
class Node {
public:
    int data;
    Node* next;
    Node() {
        next = NULL;
    }
    void setData(int val) {
        data = val;
    }
    void setNext(Node* node) {
        next = node;
    }
    int getData() {
        return data;
    }
    Node* getNext() {
        return next;
    }
    ~Node() {
        if(next != NULL) {
            delete next;
            next = NULL;
        } 
    }
};
// list 
class List {
public:
    Node* Head;
    // constructor
    List() {
        Head = NULL;
    }
    // push_back 
    void push_back(int val) {
        Node* newNode = new Node();
        newNode->setData(val);
        if(Head == NULL) {
            Head = newNode;
        } else {
            Node* temp = Head;
            while(temp->getNext() != NULL) {
                temp = temp->getNext();
            }
            temp->setNext(newNode);
        }
    }

    void display() {
        Node* temp = Head;
        while(temp != NULL){
            cout << temp->getData() << " -> ";
            temp = temp->getNext();
        }
        cout << "NULL" << endl;
    }

    ~List() {
        if(Head != NULL) {
            delete Head;
            Head = NULL;
        }
    }
    
};
int main() {
    List ll;
    ll.display();
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.display();
    return 0;
}