#include <iostream>
#include <climits>
using namespace std;
void printSubarray(int *arr, int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
    cout << endl;
}

void maxProduct(int *arr, int n) {
    int maxProd = INT_MIN;
    for (int start = 0; start < n; start++) {
        int currProduct = 1;
        for (int end = start; end < n; end++) {
           currProduct *= arr[end];
           cout << currProduct << ", ";
        }
        maxProd = max(currProduct, maxProd);
        cout << endl;
    }
    cout << "Max Product : " << maxProd << endl;
}

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    // printSubarray(arr, n);
    maxProduct(arr, n);
    return 0;
}