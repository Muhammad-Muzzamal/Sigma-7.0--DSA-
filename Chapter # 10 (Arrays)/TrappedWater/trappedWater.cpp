#include <iostream>
#include <climits>
using namespace std;
int trappedWater(int *height, int size) {
    int leftmax[20000];
    leftmax[0] = height[0];
    for (int i = 1; i < size; i++)
    {
        leftmax[i] = max(leftmax[i-1], height[i-1]);
    }
    cout << endl;

    int rightMax[20000];
    rightMax[size-1] = height[size-1];
    for (int i = size-2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }
    int waterTrapped = 0;
    for (int i = 0; i < size; i++)
    {
        int currWater = min(leftmax[i], rightMax[i]) - height[i];
        if (currWater > 0) {
            waterTrapped += currWater;
        }
    }
    cout << waterTrapped;
    
    
}
int main () {
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(height) / sizeof(int);
    trappedWater(height, size);
    return 0;
}