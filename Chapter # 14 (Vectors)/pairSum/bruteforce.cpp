#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> vec, int target) {
    int start = 0;
    int end = vec.size()-1;
    int currSum = 0;
    vector<int> ans;
    while (start < end) {
        currSum = vec[start] + vec[end];
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
    return ans;
    
}
int main() {
    vector<int> vec = {2, 7, 1, 15};
    int target = 9;
    short(vec);
    // vector<int> ans = pairSum(vec, target);
    // cout << ans[0] << ", " << ans[1] << endl;
    
    
    return 0;
}