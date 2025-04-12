#include <iostream>
#include <climits>
using namespace std;
int maxSubarraySum(int *arr, int size) {
    int currentSum;
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++) {
        currentSum = 0;
        for (int end = start; end < size; end++) {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    return maxSum;
}
int main () {
    // int array[] = {2, -3, 6, -5, 4, 2};
    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);

    cout << maxSubarraySum(array, size) << endl;
    
    return 0;
}