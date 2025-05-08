#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pairSum(vector<int> vec, int target) {
    sort(vec.begin(), vec.end());
    int start = 0;
    int end = vec.size()-1;
    vector<int> ans;
    while (start < end) {
        int currSum = vec[start] + vec[end];
        if(currSum == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target) {
            end--;   
        }
        else {
            start++;
        }
    }
    return {-1, -1};
    
}
int main() {
    vector<int> vec = {2, 7, 1, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;

    
    return 0;
}