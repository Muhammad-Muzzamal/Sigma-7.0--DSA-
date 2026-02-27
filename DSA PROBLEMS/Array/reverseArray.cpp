#include <iostream>
using namespace std;
int *reverseArray(int *array, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {

        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    return array;
}
int main()
{
    int array[] = {12, 45, 7, 91, 23, 64, 10};
    int size = sizeof(array) / sizeof(int);
    reverseArray(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}