#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void get_ithBit(int num, int i) {
    int bitmask = pow(2, i);
    if((num & bitmask) > 0 ) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
}
int getIthBit(int n, int i) {
    int bitmask = (1 << i);
    if((n & bitmask) == 0) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    // get_ithBit(6,3);
    // cout << getIthBit(6, 2);
    
    
    return 0;
}