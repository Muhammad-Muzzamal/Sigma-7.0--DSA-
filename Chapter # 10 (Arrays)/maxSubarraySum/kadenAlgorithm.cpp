#include <iostream>
#include <climits>
using namespace std;
int maxSubarraySum(int *arr, int size) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;




}
int main () {
    // int array[] = {2, -3, 6, -5, 4, 2};
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    cout << maxSubarraySum(array, size) << endl;

    
    return 0;
}