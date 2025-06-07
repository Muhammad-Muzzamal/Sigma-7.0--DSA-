#include <iostream>
using namespace std;
// check the function is sorted or not 
bool isSorted(int *array, int size, int i) {
    if(i == size-1) {
        return true;
    }
    if(array[i] > array[i+1]) {
        return false;
    }
    return isSorted(array, size,i+1);
}
int main() {
    int array1[] = {1, 2, 3, 4, 5}; // sorted : 1 true
    int array2[] = {1, 3, 4, 2, 5}; // unsorted : 0 false
    cout << isSorted(array2, 5, 0) << endl;
    
    return 0;
}