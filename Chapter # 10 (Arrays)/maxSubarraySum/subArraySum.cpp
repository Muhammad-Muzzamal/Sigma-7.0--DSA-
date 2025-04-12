#include<iostream>
using namespace std;
int printSubArray(int arr[], int size) {
    int sum;
    for (int start = 0; start < size; start++) {
        sum = 0;
        for (int end = start; end < size; end++) {
            sum += arr[end];
        }
        
    }
    

}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    printSubArray(arr, size);
    
    return 0;
}


 // for (int i = start; i <= end; i++) {
            //     cout << i+1;
            // }
            // cout << ", ";