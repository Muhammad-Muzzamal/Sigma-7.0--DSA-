#include <iostream>
using namespace std;
class Node {
private:
    int data;
    Node* next;
public:
    Node() {}
    Node(int data) {
        this->data = data;
        next = NULL;
    }
    void setData(int data) {
        this->data = data;
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
    Node* head;
    int size;
public:
    List() {
        head = NULL;
        size = 0;
    }
    Node* getHead() {
        return head;
    }
    int getSize() {
        return size;
    }
    void visit(Node* node) {
        cout << node->getData() << " ";
    }
    void print(string str) {
        cout << str << endl;
    }
    void traverse() {
        Node* current = head;
        if(head == NULL) {
            print("List is Empty");
            return;
        }
        while(current != NULL) {
            visit(current);
            current = current->getNext();
        }
        cout << endl;
    }

    void insertAtFront(int data) {
        if(head == NULL) {
            head = new Node(data);
            size++;
            return;
        }
        Node* newNode = new Node(data);
        newNode->setNext(head);
        head = newNode;
        size++;
        return;
    }
    void  insertAtEnd(int data) {
        if(head == NULL) {
            head = new Node(data);
        } else {
        Node* newNode = new Node(data);
        Node* current = head;
        while(current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(newNode);
        size++;
        return;
        }
    }
    void deleteFromFront() {
        if(head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->getNext();
        delete temp;
        temp = NULL;
    } 
    void deleteFromEnd() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        while(temp->getNext()->getNext() != NULL) {
            temp = temp->getNext();
        }
        delete temp->getNext();
        temp->setNext(NULL);
    }

    void deleteAt(int pos) {
        Node* temp = head;
        for(int i=0; i<pos-2; i++) {
            temp = temp->getNext();
        }
        Node* toBeDeleted = temp->getNext();
        temp->setNext(temp->getNext()->getNext());
        delete toBeDeleted;
        toBeDeleted = NULL;
    }
    bool isEmpty() {
        return head == NULL;
    }
    int search(int target) {
        Node* current = head;
        while(current != NULL) {
            if(current->getData() == target) {
                return 1;
            }
            current = current->getNext();
        }
        return 0;
    }
};

int main() {
    cout << "Program Started\n";
    List ll;
    for(int i=0; i<20; i++) {
        ll.insertAtEnd(i+1);
    }
    ll.traverse();
    ll.deleteAt(3);
    ll.traverse();
    
    return 0;
}