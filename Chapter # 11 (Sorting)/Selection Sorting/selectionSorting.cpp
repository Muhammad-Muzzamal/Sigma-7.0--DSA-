#include <iostream>
using namespace std;
void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
void selectionSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        int minIndx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndx]) {
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
    print(arr, n);
}

int main () {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before sorting : " << endl;
    print(arr, n); 
    cout << "After sorting : " << endl;
    selectionSort(arr, n);
    return 0;
}