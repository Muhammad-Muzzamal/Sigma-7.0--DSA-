#include <iostream>
using namespace std;
class Node {
private:
    int data;
    Node* next;
public:
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
};

class List {
private:
    Node* head, *tail;
    int s;
public:
    List() {
        head = NULL;
        tail = NULL;
        s = 0;
    }
    int getHead() {
        return head->getData();
    }
    int getTail() {
        return tail->getData();
    }
    int size() {
        return s;
    }
    void push_front(int val) {
        Node* newNode = new Node();
        newNode->setData(val);
        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->setNext(head);
            head = newNode; // update the head to the newly entered node at the front of the list
        }
        s++;
    }

    void push_back(int val) {
        Node* newNode = new Node();
        newNode->setData(val);
        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->setNext(newNode);
            tail = newNode;
        }
        s++;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->getData() << " -> ";
            temp = temp->getNext();
        }
        cout << "NULL" << endl;
    }

    void insertAtMiddle(int val) {
        Node* newNode = new Node();
        newNode->setData(val);
    }

};
int main() {
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    cout << ll.size() << endl;

}