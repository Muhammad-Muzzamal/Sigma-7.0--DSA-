#include <iostream>
using namespace std;
int search(int *arr, int n, int target) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main () {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int);
    int target = 0;
    cout << search(arr, n, target) << endl;

    
    
    return 0;
}