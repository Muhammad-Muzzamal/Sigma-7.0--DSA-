#include <iostream>
#include <stack>
using namespace std;
void pushAtBottom(stack<int> &s, int val) {
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}
void reverseStack(stack<int> &s){
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s, temp);
}
void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; 
}
int main() {
    stack<int> s;
    for(int i=0; i<10; i++) {
        s.push(i+1);
    }

    print(s);

    reverseStack(s);

    print(s);
    
    return 0;
}