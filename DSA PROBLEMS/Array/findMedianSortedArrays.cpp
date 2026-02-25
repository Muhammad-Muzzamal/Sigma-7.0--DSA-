#include <iostream>
#include <vector>
using namespace std;

float findMedianSortedArrays(vector<int>& a1, vector<int>& a2)
{
    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < a1.size() && j < a2.size())
    {
        if (a1[i] < a2[j])
        {
            ans.push_back(a1[i]);
            i++;
        }
        else
        {
            ans.push_back(a2[j]);
            j++;
        }
    }
    // add remaining elements
    for (int k = i; k < a1.size(); k++)
    {
        ans.push_back(a1[k]);
    }
    for (int k = j; k < a2.size(); k++)
    {
        ans.push_back(a2[k]);
    }

    if (ans.size() % 2 == 0)
    {
        int mid = ans.size() / 2;
        return float((ans[mid] + ans[mid - 1])) / 2.0;
    }

    return float(ans[ans.size() / 2]);
}

int main()
{
    vector<int> a1 = {1, 2};
    vector<int> a2 = {3, 4};
    float median = findMedianSortedArrays(a1, a2);
    cout << "Median : " << median << endl;

    return 0;
}