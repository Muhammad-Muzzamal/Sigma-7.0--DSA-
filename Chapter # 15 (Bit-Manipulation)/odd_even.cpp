#include <iostream>
using namespace std;
void oddEven(int n) {
    if(!(n & 1)) {   // ((n & 1) == 0)
        cout << "Even\n";
    }
    else {
        cout << "Odd\n";
    }
}
int main() {
    oddEven(7);
    oddEven(8);
    return 0;
}