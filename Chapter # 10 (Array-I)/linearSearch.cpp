#include <iostream>
using namespace std;
//int linearSearch(int *arr, int size, int target) //is also valid 
int linearSearch(int arr[], int size, int target) {

    for (int index = 0; index < size; index++)
    {
        if (arr[index] == target) {
            return index;
        }
    }
    return -1;
    
}
int main() {

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 10;
    int size = sizeof(arr) / sizeof(int);
    // for (int index = 0; index < size; index++) {
    //     if (arr[index] == target) {
    //         cout << "Target is at " << index << " index." << endl;
    //     }
    // }

    cout << linearSearch(arr, size, target) << endl;
    return 0;
}