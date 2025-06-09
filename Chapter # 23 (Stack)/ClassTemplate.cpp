#include <iostream>
#include <vector>
using namespace std;
template <class type>
class Stack {
public:
    vector<type> vec;
    void push(type val) {
        vec.push_back(val);
    }
    type top() {
        return vec.at(vec.size()-1);
    }
    void pop() {
        vec.pop_back();
    }
    bool isEmpty() {
        return vec.size() == 0;
    }
};

int main() {
    Stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');

    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}