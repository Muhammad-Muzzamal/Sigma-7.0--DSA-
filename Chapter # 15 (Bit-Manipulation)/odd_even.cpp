#include <iostream>
using namespace std;
int main() {
    int n=7;
    if((n&1) == 0) {
        cout << "Even\n";
    }
    else{
        cout << "Odd\n";
    }
    return 0;
}