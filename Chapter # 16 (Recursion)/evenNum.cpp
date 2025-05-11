#include <iostream>
using namespace std;
// the given n is even number
void printEven(int n) { 
    // base case 
    if(n < 2) {
        return;
    }
    // kaam kya krana ha 
    cout << n << " ";
    // recursive call 
    printEven(n-2);
}
// in ascending order
void printEvenAsc(int n) {
    if (n < 2) {
        return;
    }
    printEvenAsc(n-2);
    cout << n << " ";
}
int main() {
    printEvenAsc(10);
    return 0;
}