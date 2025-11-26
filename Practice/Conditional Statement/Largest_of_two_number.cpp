#include <iostream>
using namespace std;
int main() {
    cout << "Enter two Numbers : " << endl;
    int x, y;
    cin >> x >> y;
    if(x > y) {
        cout << x << " is Larger";
    } else {
        cout << y << " is Larger";
    }
    return 0;
}