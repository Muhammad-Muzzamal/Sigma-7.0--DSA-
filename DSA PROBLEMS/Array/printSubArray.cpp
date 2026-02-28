#include <iostream>
using namespace std;
void printSubArray(int *arr, int size) {
    for(int start = 0 ; start < size; start++) { // starting index
        for(int end = start; end < size; end++) { // number of element in subarray
            for(int i = start; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    printSubArray(arr, size);
    
    return 0;
}