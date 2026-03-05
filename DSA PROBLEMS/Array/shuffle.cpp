#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans(2 * n);
    int ans_index = 0;
    for (int i = 0; i < n; i++)
    {
        ans[ans_index] = nums[i];
        ans[ans_index + 1] = nums[i + n];
        ans_index += 2;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    vector<int> ans = shuffle(nums, 3);
    for(int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}