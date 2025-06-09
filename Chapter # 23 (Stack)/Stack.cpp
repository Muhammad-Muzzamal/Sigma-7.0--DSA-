#include <iostream>
#include <vector>
using namespace std;
class Stack {
public:
    vector<int> vec;
    void push(int val) {
        vec.push_back(val);
    }

    int top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
        }
        return vec.at(vec.size()-1);
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        vec.pop_back();
    }

    bool isEmpty() {
        return vec.size() == 0;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}