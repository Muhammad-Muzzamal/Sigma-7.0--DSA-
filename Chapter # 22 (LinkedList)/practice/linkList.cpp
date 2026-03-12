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
    l.push_back(12);
    l.push_back(13);
    l.push_front(11);
    l.display();
    cout << l.getSize() << endl;
    
    return 0;
}