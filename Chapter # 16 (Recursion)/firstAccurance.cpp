#include <iostream>
using namespace std;
int firstAccurance(int array[], int size, int target, int i) {
    if(i == size-1) {
        return -1;
    }
    // base case
    if(target == array[i]) {
        return i;
    }
    // work to do 
    return firstAccurance(array, size, target, i+1);
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    cout << firstAccurance() << endl;

    
    return 0;
}