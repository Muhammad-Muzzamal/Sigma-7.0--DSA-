#include <iostream>
#include <algorithm>
using namespace std;
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main () {
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    // ascending sorting
    //complete sorting 
    // sort(arr, arr+n);

    // sorting in specific region 
    // sort(arr+1, arr+n); // 0+1 to last element


    // Decending Soring 

    sort(arr, arr+n, greater<int>());
    display(arr, n);
    return 0;
}