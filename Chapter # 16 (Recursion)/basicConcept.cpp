#include <iostream>
using namespace std;
void func0(int n) {
    cout << "HAPPY BIRTHDAY !\n";
    return;
}
void func1(int n) {
    cout << n << " days left for birth day.\n";
    func0(n-1);
}
void func2(int n) {
    cout << n << " days left for birthday.\n";
    func1(n-1);
}
void func3(int n) {
    cout << n << " days left for birthday.\n";
    func2(n-1);
}

// recussion of above concept
void func(int n) {
    if(n == 0) {
        cout << "HAPPY BIRTHDAY....!\n";
        return;
    }
    cout << n << " days left for birthday.\n";
    func(n-1);
}



int main() {
    int n = 100;
    func(n);
    return 0;
}