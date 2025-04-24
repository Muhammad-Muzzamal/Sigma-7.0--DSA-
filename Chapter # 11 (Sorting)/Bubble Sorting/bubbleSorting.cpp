#include <iostream>
using namespace std;
void display(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
}
int bubbleSorting(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }

    }
    display(arr, n);
}

int main () {
    int arr[] = {3, 5, 1, 4, 2};
    int n = sizeof(arr)/ sizeof(int);
    display(arr, n);
    cout << endl;
    bubbleSorting(arr, n);
    return 0;
}