#include <iostream>
using namespace std;
int setithBit(int num, int i) {
    int bitMask = (1 << i);
    return (num | bitMask);
}
int main() {
    cout << setithBit(6, 4);
    return 0;
}