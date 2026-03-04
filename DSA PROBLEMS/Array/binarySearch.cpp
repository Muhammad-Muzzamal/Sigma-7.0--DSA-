#include <iostream>
using namespace std;
int binarySearch(int *array, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}
int main()
{
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(array) / sizeof(int);
    int keyIndex = binarySearch(array, size, 91);
    cout << "Key Index : " << keyIndex << endl;

    return 0;
}