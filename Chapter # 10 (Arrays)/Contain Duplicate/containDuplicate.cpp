#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool containDuplicate(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count >= 2) {
            return true;
        }
    }
    return false;
    
}
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i-1] == nums[i]) {
            return true;
        }
    }
    return false;
}
int main () {
    /*int arr[] = {1,2,3,1};
    int n = sizeof(arr) / sizeof(int);
    cout << containDuplicate(arr, n) << endl;*/

    vector<int> vec ={1,2,3,1};
    cout << containsDuplicate(vec);
    return 0;
}