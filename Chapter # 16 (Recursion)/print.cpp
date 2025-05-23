#include <iostream>
using namespace std;
void print(int i, int n) {
    if(i==n) {
        cout << i;
        return;
    }
    cout << i << " ";
    print(i+1, n);
}
int main() {
    cout << "Program started.....\n";
    print(5, 10);
    return 0;
}