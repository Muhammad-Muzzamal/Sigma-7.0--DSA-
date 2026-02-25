#include <iostream>
#include <vector>
using namespace std;

// find two sum
vector<int> twoSum(vector<int> &array, int target)
{
    vector<int> ans;
    int size = array.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> array = {2, 7, 11, 15};
    vector<int> ans = twoSum(array, 9);
    for(int a : ans) {
        cout << a << " ";
    }
    return 0;
}