#include <iostream>
#include <list>
using namespace std;
// Stack LIFO
// Important Functions 
//     push() push value at the head 
//     pop() return the vaue of head of the LL and update the head 
//     top() is the top of the LL
template <class T>
class Node {
public:
    T data;
    Node<T>* next;
    Node() {
        next = NULL;
    }
    void setData(T val) {
        data = val;
    }

};

template <class T>
class Stack{
    Node<T>* head;
public:
    Stack() {
        head = NULL;
    }
    void push(T val) {
        Node<T>* newNode = new Node<T>;
        newNode->setData(val);

        if(head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return T();
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }

};
template <typename T>
void printStack(Stack<T> s) {
    if(s.isEmpty()) {
        cout << "Stack is Empty." << endl;
        return;
    }
    while(!s.isEmpty()){
    cout << s.top() << " ";
    s.pop();
    }
}

int main() {
    
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printStack(s);
    return 0;
}