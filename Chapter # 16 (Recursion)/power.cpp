#include <iostream>
using namespace std;
// power function 
int power(int x, int n) {
    if(n == 1) {
        return x;
    }
    return x * power(x, n-1);
}
int power1(int x, int n) {
    // base case
    if(n == 0) {
        return 1;
    }
    int halfPower = power(x, n/2);
    int halfPowerSquare = halfPower * halfPower;
    //if odd
    if(n%2 != 0) {
        return 2 * halfPowerSquare;
    }
    //if even
    return halfPowerSquare;
}
int main() {
    cout << power1(2, 5) << endl;
    
    return 0;
}