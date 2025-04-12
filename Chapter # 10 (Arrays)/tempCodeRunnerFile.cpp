#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 12;
    int n = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end) {
        if (arr[mid] == target) {
            cout << mid << endl;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        }
    }
    
    return 0;
}