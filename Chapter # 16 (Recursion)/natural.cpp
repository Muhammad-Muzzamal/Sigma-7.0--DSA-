#include <iostream>
using namespace std;
void usingLoop(int n) {
    for(int i=0; i<n; i++) {
        cout << i+1 << " ";
    }
    cout << endl; 
}
// recursion
void print(int n) {
    if(n == 0){
        return ;
    }
    cout << n << " ";
    print(n-1);
}
// ascending order natural number 
void printasc(int n) {
    if(n==0) {
        return;
    }
    printasc(n-1);
    cout << n << " ";
}
int main() {
    printasc(10);
    return 0;
}