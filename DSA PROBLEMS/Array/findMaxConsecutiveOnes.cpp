#include <iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums) {
    int maxCount = 0;
    int currCount = 0;

    for(int num : nums) {
        if(num == 1) {
            currCount++;
            maxCount = max(maxCount, currCount);
        } else {
            currCount = 0;
        }
    }
    return maxCount;
}
int main() {
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}