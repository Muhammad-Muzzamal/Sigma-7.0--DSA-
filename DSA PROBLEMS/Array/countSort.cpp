#include <iostream>
#include "climits"
using namespace std;
void countSort(int *arr, int size)
{
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    int freq[1000] = {0}; // initialized with zero
    for (int i = 0; i < size; i++)
    {
        // calculate min and max value in original array
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);

        // update freq array
        freq[arr[i]]++;
    }
    for (int i = minValue, j = 0; i <= maxValue; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

void print(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int size = sizeof(arr) / sizeof(int);
    countSort(arr, size);
    print(arr, size);

    return 0;
}