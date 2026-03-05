#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> &nums) {
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int> &nums) {
    int i = 0; // track last unique element
    int j = 1; // traverse array

    for(j = 1; j<nums.size(); j++) {
        if(nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    // print(nums);
    return i+1;
}

// rempve duplicate from unsorted array without any extra space
// sort array and apply remove duplicate 

int main() {
    // vector<int> nums = {1,1,2};
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int uniqueElement = removeDuplicates(nums);
    cout << uniqueElement << endl;
    return 0;
}