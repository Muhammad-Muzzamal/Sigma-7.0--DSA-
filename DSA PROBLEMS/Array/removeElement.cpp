#include <iostream>
#include<vector>
using namespace std;

int removeElement(vector<int> &nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if(nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main() {

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int k = removeElement(nums, 2);
    cout << k << endl;

    return 0;
}