#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int trappedWater(int *height, int size) {
    int leftmax[20000], rightMax[20000];
    leftmax[0] = height[0];
    rightMax[size-1] = height[size-1];
    //left max 
    for (int i = 1; i < size; i++)
    {
        leftmax[i] = max(leftmax[i-1], height[i-1]);
    }
    //right max 
    for (int i = size-2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }
    //trapped water
    int waterTrapped = 0;
    for (int i = 0; i < size; i++)
    {
        int currWater = min(leftmax[i], rightMax[i]) - height[i];
        if (currWater > 0) {
            waterTrapped += currWater;
        }
    }
    cout << waterTrapped;
    return waterTrapped;
    
}

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> leftMax;
    vector<int> rightMax;
    leftMax[0] = height[0];
    leftMax[n-1] = height[n-1];
    //left
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }
    //right
    for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i-1]);
    }
    //trapped Water
    int trappedWater = 0;
    for(int i=0; i<n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if(currWater > 0) {
            trappedWater += currWater;
        }
    }
    return trappedWater;
}


int main () {
    // int height[] = {4, 2, 0, 6, 3, 2, 5};
    // int size = sizeof(height) / sizeof(int);
    // trappedWater(height, size);
    vector<int> height = {4, 2, 0, 6, 3, 2, 5};
    cout << trap(height);
    return 0;
}