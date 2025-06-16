#include <iostream>
using namespace std;
class IntSLLNode {
public:
    int info;
    IntSLLNode* next;
    IntSLLNode() {
        next = NULL;
    }
    IntSLLNode(int el, IntSLLNode* ptr = NULL) {
        info = el;
        next = ptr;
    }
};

class IntSLList {
public:
    IntSLLNode* head;
    IntSLLNode* tail;
    IntSLList() {
        head = tail = NULL;
    }
    bool isEmpty() {
        return head == 0;
    } 

    void addToHead(int el) {
        head = new IntSLLNode(el, head);
        if(tail == NULL) {
            tail = head;
        }
    }

    void addToTail(int el) {
        if(tail != NULL) {
            tail->next = new IntSLLNode(el);
            tail = tail->next;
        } else {
            head = tail = new IntSLLNode(el);
        }
    }

    int deleteFromHead() {
        int el = head->info;
        IntSLLNode* tmp = head;
        if(head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
        }
        delete tmp;
        return el;
    }

    int deleteFromTail() {
        int el = tail->info;
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            IntSLLNode* tmp;
            tmp = head;
            while(tmp->next != NULL) {
                tmp = tmp->next;
            }
            delete tail;
            tail = tmp;
            tail->next = NULL;
        }
        return el;
    }

    void deleteNode(int el) {
        if(head != NULL) {
            if (head == tail && el == head->info) {
                delete head;
                head = tail = NULL;
            } else if(el == head->info) {
                IntSLLNode* tmp = head;
                head = head->next;
                delete tmp;
            } else {
                IntSLLNode *tmp, *pred;
                pred = head;
                tmp = head->next;
                while(tmp != NULL && tmp->info != el) {
                    tmp = tmp->next;
                    pred = pred->next;
                }
                if(tmp != NULL) {
                    pred->next = tmp->next;
                    if(tmp == tail) {
                        tail = pred;
                    }
                    delete tmp;
                }
                
            }
        }
    }

    bool isIntList(int el) {
        IntSLLNode* tmp;
        for(tmp = head; tmp!= NULL && !(tmp->info == el); tmp = tmp->next);
        return tmp != NULL;
    }

    void display() {
        IntSLLNode* tmp;
        for(tmp = head; tmp != NULL; tmp = tmp->next) {
            cout << tmp->info << " -> ";
        }
        cout << "NULL" << endl;
    }
    ~IntSLList() {
        // for(IntSLLNode* p; !isEmpty(); ) {
        //     p = head->next;
        //     delete head;
        //     head = p;
        // }

        while(!isEmpty()) {
            IntSLLNode* p;
            p = head->next;
            delete head;
            head = p;
        }
    }
};
int main() {
    
    IntSLList ll;
    ll.addToHead(11);
    ll.display();
    ll.addToTail(12);
    ll.display();
    ll.addToHead(10);
    ll.display();
    return 0;
}