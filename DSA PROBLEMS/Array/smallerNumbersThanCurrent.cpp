<<<<<<< HEAD
#include <iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    vector<int> countArray;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        count = 0;
        for(int j=0; j<nums.size(); j++) {
            if(nums[j] != nums[i] && nums[j] < nums[i]) {
                count++;
            }
        }
        countArray.push_back(count);
    }
    return countArray;
}
int main() {
    vector<int> nums = {8,1,2,2,3};
    vector<int> count = smallerNumbersThanCurrent(nums);
    for(int c : count) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
=======
#include <iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    vector<int> countArray;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        count = 0;
        for(int j=0; j<nums.size(); j++) {
            if(nums[j] != nums[i] && nums[j] < nums[i]) {
                count++;
            }
        }
        countArray.push_back(count);
    }
    return countArray;
}
int main() {
    vector<int> nums = {8,1,2,2,3};
    vector<int> count = smallerNumbersThanCurrent(nums);
    for(int c : count) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
>>>>>>> array-practice
}