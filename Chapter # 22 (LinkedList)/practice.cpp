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
    void reverseList() {
        Node *prev = NULL;
        Node *curr = this->getHead();
        Node *next = NULL;

        while(curr != NULL) {
            next = curr->getNext();
            curr->setNext(prev);
            prev = curr;
            curr = next;
        }
        this->head = prev;
    }
    bool detectCycle() {
        Node* slow;
        Node* fast;
        while(fast != NULL && fast->getNext() != NULL) {
            slow = slow->getNext();
            fast = fast->getNext()->getNext();

            if(slow == fast) {
                return true;
            }
        }
        return false;
    }

};


int main() {
    cout << "Program Started\n";
    // List ll;
    // ll.traverse();
    // ll.reverseList();
    // ll.traverse();
    
    // cout << ll.detectCycle() << endl;
    Node* n1 = new Node(10);
    Node* n2 = new Node(11);
    Node* n3 = new Node(12);
    Node* n4 = new Node(13);
    Node* n5 = new Node(14);
    

    return 0;
}