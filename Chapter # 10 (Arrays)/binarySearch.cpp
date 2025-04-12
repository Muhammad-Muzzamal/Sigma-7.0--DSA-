#include<iostream>
using namespace std;
int binarySearch(int *arr, int n, int target) {
    int start = 0;
    int end = n - 1;
    

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        }
    }
    return -1;

}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 12;
    int n = sizeof(arr) / sizeof(int);
    cout << binarySearch(arr, n, target) << endl;
    

    return 0;
}