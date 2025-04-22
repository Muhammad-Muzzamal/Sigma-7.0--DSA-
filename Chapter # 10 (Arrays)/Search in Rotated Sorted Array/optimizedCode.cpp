#include <iostream>
#include <vector>
using namespace std;
int search(int *arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        if (arr[start] < arr[mid])
        {
            if (arr[start] <= target && arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && arr[end] <= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

// leet code solution using vectors

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && nums[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
   
    // int arr[] = {4, 5, 6, 7, 1, 2, 3};
    // int n = sizeof(arr) / sizeof(int);
    // int target = 7;

    // cout << search(arr, n, target) << endl;


    vector<int> nums = {3,1};
    int target = 1;
    cout << search(nums, target);
    return 0;
}