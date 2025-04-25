#include <iostream>
using namespace std;
void display(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
void selectionSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    display(arr, n);
}
int main () {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before Selestion Sorting :\n";
    display(arr, n);
    cout << "After Selestion Sorting :\n";
    selectionSort(arr, n);
    return 0;
}