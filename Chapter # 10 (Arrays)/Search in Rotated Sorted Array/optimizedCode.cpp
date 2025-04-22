#include <iostream>
using namespace std;
int search(int *arr, int n, int target) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == arr[mid]) {
            return mid;
        }
        if(arr[start] < arr[mid]) {
            if(arr[start] <= target && arr[mid] > target) {
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        else {
            if (arr[mid] < target && arr[end] <= target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main () {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int target = 7;

    cout << search(arr, n, target) << endl;
    return 0;
}