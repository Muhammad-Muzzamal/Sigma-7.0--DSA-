#include <iostream>
using namespace std;

class Node{
    private:
        int data;
        Node* next;
    
    public:
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
        // setter
        void setData(int data) {
            this->data = data;
        }
        void setNext(Node* next) {
            this->next = next;
        }
        // getter
        int getData() {
            return this->data;
        }
        Node* getNext() {
            return this->next;
        }
};

class LL{
    private:
        Node* head;
        Node* tail;
        int size;

    public:
        LL(){
            this->head = NULL;
            this->tail = NULL;
            this->size = 0;
        }
        // getter
        Node* getHead() {
            return this->head;
        }
        Node* getTail() {
            return this->tail;
        }
        int getSize() {
            return size;
        }

        // add node at the last
        void push_back(int data) {
            Node* newNode = new Node(data);
            if(head == NULL) {
                head = tail = newNode;
                size++;
                return;
            }
            this->tail->setNext(newNode);
            this->tail = newNode;
            size++;
        }
        // add node at start
        void push_front(int data) {
            Node* newNode = new Node(data);
            if(head == NULL) {
                head = tail = newNode;
                size++;
                return;
            }
            newNode->setNext(this->getHead());
            this->head = newNode;
            size++;
        }
        // delete node from front
        void pop_front() {
            if(this->head == NULL) {
                cout << "List is empty\n";
                return;
            }
            Node* temp = this->head;
            this->head = this->head->getNext();
            delete temp;
            size--;
            return;
        }
        // delete from tail
        void pop_back() {
            if(head == NULL) {
                cout << "List is empty\n";
                return;
            }
            Node* temp = head;
            while(temp->getNext()->getNext() != NULL) {
                temp = temp->getNext();
            }
            delete temp->getNext();
            temp->setNext(NULL);
            tail = temp;
            size--;
            return;
        }
        // check the list is empty or not
        bool isEmpty() {
            if(this->head == NULL) {
                return true;
            }
            return false;
        }
        // Seach a key and return index
        int linearSearch(int target) {
            if(this->head == NULL) {
                return -1;
            }
            Node* temp = this->getHead();
            int i = 0;
            while(temp != NULL) {
                if(temp->getData() == target) {
                    return i;
                }
                i++;
                temp = temp->getNext();
            }
            return -1;
        }
        
        // display linklist
        void display() {
            if(head == NULL) {
                cout << "List is empty\n";
                return;
            }
            Node* temp = head;
            while(temp != NULL) {
                cout << temp->getData() << " -> ";
                temp = temp->getNext();
            }
            cout << "NULL" << endl;
            return;
        }
        

};

int main() {
    LL l = LL();
    for(int i = 10; i <= 100; i += 10) {
        l.push_back(i);
    }
    l.display();
    for(int i = 10; i <= 100; i += 10) {
        cout << l.linearSearch(i) << endl;
    }









    // cout << l.isEmpty() << endl;
    // l.push_back(12);
    // l.push_back(13);
    // l.push_front(11);
    // l.display();
    // l.pop_front();
    // l.display();
    // l.pop_back();
    // l.display();
    // cout << l.getSize() << endl;
    // cout << l.isEmpty() << endl;
    
    return 0;
}