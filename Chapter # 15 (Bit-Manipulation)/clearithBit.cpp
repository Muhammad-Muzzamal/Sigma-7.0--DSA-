#include <iostream>
using namespace std;
int clearithBit(int num, int i) {
    int bitMask = ~(1 << i);
    return (num & bitMask);
}
int main() {
    cout << clearithBit(6, 2) << endl;
    return 0;
}