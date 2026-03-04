#include <iostream>
#include <climits>
using namespace std;
void printSubArray(int *arr, int size)
{
    for (int start = 0; start < size; start++)
    { // starting index
        for (int end = start; end < size; end++)
        { // number of element in subarray
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
int maxSubArraySum(int *arr, int size)
{
    int maxSum = INT_MIN;
    int currSum;

    for (int start = 0; start < size; start++) // starting index
    {
        for (int end = start; end < size; end++) // number of element in subarray
        {
            currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}
int maxSubArraySum1(int *arr, int size)
{
    int maxSum = INT_MIN;
    int currSum;
    for (int i = 0; i < size; i++)
    {
        currSum = 0;
        for (int j = i; j < size; j++)
        {
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}
int kadanAlgorithm(int *arr, int size)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(int);
    int maxSum = kadanAlgorithm(arr, size);
    cout << maxSum << endl;

    return 0;
}