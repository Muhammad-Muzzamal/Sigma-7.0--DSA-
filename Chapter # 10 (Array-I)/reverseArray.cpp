#include <iostream>
using namespace std;
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
}
int main()
{

    int orignalArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(orignalArray) / sizeof(int);
    int start = 0;
    int end = size - 1;

    /*
    int copyArray[size];

    for (int i = 0; i < size; i++)
    {
        int j = size - i - 1;
        copyArray[j] = orignalArray[i];
    }

    for (int i = 0; i < size; i++) {
        orignalArray[i] = copyArray[i];
    }

    
    */

    //without any extra space 

    while (start < end)
    {
        int temp;
        temp = orignalArray[start];
        orignalArray[start] = orignalArray[end];
        orignalArray[end] = temp;
        end--;
        start++;
    }
    printArray(orignalArray,size);
    
    cout << endl;
    return 0;
}