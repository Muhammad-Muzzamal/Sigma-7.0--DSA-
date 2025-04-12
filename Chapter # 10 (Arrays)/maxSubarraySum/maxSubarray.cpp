#include<iostream>
#include <climits>
using namespace std;
void maxSubarray(int *arr, int size) {
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            int currentSum = 0;
            for (int i = start; i <= end; i++) {
                currentSum += arr[i];
            }
            cout << currentSum << ", ";
            maxSum = max(maxSum, currentSum);
            
            
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum is: "<< maxSum << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    maxSubarray(arr, size);
    
    return 0;
}