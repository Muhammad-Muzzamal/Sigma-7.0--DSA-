#include <iostream>
#include <vector>
using namespace std;
vector<int> getConcatenation(vector<int> &nums)
{
    int size = nums.size();
    vector<int> ans(size * 2);

    for (int i = 0; i < size; i++)
    {
        ans[i] = nums[i];
        ans[i + size] = nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 1};
    
    vector<int> ans = getConcatenation(nums);
    for (int a : ans)
    {
        cout << a << " ";
    }
    return 0;
}