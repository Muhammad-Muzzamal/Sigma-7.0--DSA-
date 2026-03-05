#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> ans;
    int i = 0;
    while (i < nums.size())
    {
        int correctPosition = nums[i] - 1;
        if (nums[i] != nums[correctPosition])
        {
            swap(nums[i], nums[correctPosition]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i + 1)
        {
            ans.push_back(nums[i]);
            ans.push_back(i + 1);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 4};
    vector<int> ans = findErrorNums(nums);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}