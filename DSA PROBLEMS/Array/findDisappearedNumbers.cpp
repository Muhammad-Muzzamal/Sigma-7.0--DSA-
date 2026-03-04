#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> missing;
    vector<int> freq(nums.size() + 1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]] += 1;
    }
    for (int i = 1; i < nums.size() + 1; i++)
    {
        if (freq[i] == 0)
        {
            missing.push_back(i);
        }
    }
    return missing;
}
// optimized approach with constant space 
vector<int> findDisappearedNumbers1(vector<int> &nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++) {
        int idx = abs(nums[i]) - 1;
        if(nums[idx] > 0) {
            nums[idx] = -nums[idx];
        }
    }
    // find mising 
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > 0) {
            ans.push_back(i+1);
        }
    }

    // return ans
    return ans;
}


int main()
{
    // vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums = {1,1};
    vector<int> ans = findDisappearedNumbers1(nums);
    for (int a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}

