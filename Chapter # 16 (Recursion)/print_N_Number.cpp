#include <iostream>
using namespace std;
void print(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    print(n-1);
}

// infinite recursion
void sayHello() {
    cout << "Hello " << endl;
    sayHello();
}
int main() {
    // sayHello();
    return 0;
}