#include <iostream>
using namespace std;
// recursion 
void func(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " days left for birthday.\n";
    func(n-1);
}

// using normal function 
void func2(int n) {
    cout << n  << " days left.\n";
}
void func1(int n) {
    cout << n  << " days left.\n";
    func1(n-1);
}

void func3(int n) {
    cout << n  << " days left.\n";
}
void func4(int n) {
    cout << n  << " days left.\n";
}

int main() {
    func4(4);
    func3(3);
    func1(1);
    return 0;
}