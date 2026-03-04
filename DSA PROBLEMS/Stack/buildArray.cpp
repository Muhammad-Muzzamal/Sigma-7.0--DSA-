#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<string> buildArray(vector<int> &target, int n)
{
    vector<string> ans;
    int i = 0;
    int num = 1;
    while (num <= n && i < target.size())
    {
        ans.push_back("Push");
        int top = num;
        if (top == target[i])
        {
            i++;
        }
        else
        {
            ans.push_back("Pop");
        }
        num++;
    }
    return ans;
}
int main()
{
    // vector<int> target = {1, 3};
    // vector<int> target = {1,2,3};
    vector<int> target = {1,2};
    int n = 4;
    vector<string> ans = buildArray(target, n);
    for (string s : ans)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}