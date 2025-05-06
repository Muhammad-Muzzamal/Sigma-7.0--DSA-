#include <iostream>
using namespace std;
int funcInt() {
    int *ptr;
    ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;
    delete ptr; // free the space from the heep memory 
}
int* func() {
    int *ptr = new int;
    *ptr = 1200;
    return ptr;
}
int funcArr() {
    int *ptr;
    ptr = new int[5];
    for(int i=0; i<5; i++) {
        cout << i+1 << ", ";
    }
    delete[] ptr; // free the space from the heep memory
}
int main() {
    // cout << *(func()) << endl;
    int *x = func();
    cout << *x << endl;
    return 0;
}