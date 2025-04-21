#include <iostream>
#include <climits>
using namespace std;
int profit(int *arr, int size) {
  
}
int main () {
    int arr[] = {1, 2, 7, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int profit;
    int max = INT_MIN;
    int min;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        for(int min = 0; min < i; min++) {
            if (arr[min] < min) {
                min = arr[min];
            }
        }
    }
    cout << "Maximum value is: " << max << endl; 
    cout << "Minimum value is: " << min << endl; 

    return 0;
}