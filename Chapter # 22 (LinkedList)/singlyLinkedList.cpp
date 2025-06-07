#include <iostream>
using namespace std;
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
    void setNext(Node* obj) {
        next = obj;
    }
    int getData() {
        return data;
    }
    Node* getNext() {
        return next;
    }
};
// Singly Linked List
class LinkedList {
    Node* head;
    Node* current;
    Node* temp;
    int size;
public:
    LinkedList(){ // default constructor
        head = current = temp = NULL;
        size = 0;
    }
    int getSize() { // get the size of the list
        return size;
    }
    int getHead() {
        return head->getData();
    }
    void display() { // display node/s in the list
        if(isEmpty()) {
            cout << "List is Empty." << endl;
        }
        else {
            current = head;
            while(current != NULL) {
                cout << current->getData() << "-> ";
                current = current->getNext();
            }
        }
        cout << "NULL" << endl;    
    }
    bool isEmpty() { // check if functon is empty 
        if(head == NULL) {
            return 1;
        }
        else {
            return 0;
        }
    }
    void push_back(int val) { // Add the node at the tail
        temp = new Node();
        temp->setData(val);
        if(isEmpty()) {
            head = temp;
        }
        else {
            current = head;
            while(current->getNext() != NULL) {
                current = current -> getNext();
            }
            current->next = temp;
        }
        size++;
    }
    void push_front(int val) { // Add the node at the Head
        temp = new Node();
        temp->setData(val);
        if (isEmpty()) {
            head = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    int searchItr(int target) {
        current = head;
        int index = 0;
        while(current != NULL && index < size) {
            if(current->getData() == target) {
                return index;
            }
            current = current->getNext();
            index++;
        }
        return -1;
    }
    bool search(int target) {
        current = head;
        while(current != NULL) {
            if(current->getData() == target) {
                return 1;
            }
            current = current->getNext();
        }
        return 0;
    }
    int pop_front() {
        if(!isEmpty()) {
            temp = head;
            head = head->next;
            temp->next = NULL;
            int data = temp->getData();
            delete temp;
            return data;
        }
        cout << "List is Empty." << endl;
    }
    void deletebyValue(int target) {
        if(!isEmpty() && search(target)){
            if(target == head->getData()){
                pop_front();
            }
            else {
                current = head;
                while(current != NULL && current->next != NULL) {
                    if(current->next->getData() == target) {
                        temp = current->next;
                        current->next = current->next->next;
                        temp->next = NULL;
                        delete temp;
                    }
                    current = current->next;
                }
            }
        }
    }
    void pop_back() {
        Node* temp = head;
        while(temp->getNext()->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->next = NULL;
        delete temp->getNext();
    }
    
};
int main() {
    LinkedList ll;
    for (int i = 0; i < 20; i++) {
        ll.push_back(i+1);
    }
    ll.display();
    ll.deletebyValue(11);
    ll.display();
    ll.deletebyValue(1);
    ll.display();
    ll.deletebyValue(20);
    ll.display();
    ll.deletebyValue(19);
    ll.display();

    
    
    return 0;
}