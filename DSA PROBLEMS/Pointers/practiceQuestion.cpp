#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 10;
    int* ptr1 = &x; // pointed to x
    int* ptr2 = &y; // pointed to y
    ptr2 = ptr1; // ptr2 -> ptr1 -> x

    cout << *ptr2 << endl;
    return 0;
}