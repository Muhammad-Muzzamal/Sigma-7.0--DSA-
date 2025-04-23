#include <iostream>
using namespace std;
int maxProduct(int *nums, int n) {
    int maxTillNow = nums[0];
    int minTillNow = nums[0];
    int ans = maxTillNow;

    for (int i=1; i<n; i++) {
        int curr = nums[i];
        int tempMaxTillNow = max(curr, max(maxTillNow*curr, minTillNow*curr));
        minTillNow = min(curr, min(maxTillNow*curr, minTillNow*curr));
        maxTillNow = tempMaxTillNow;
        ans = max(maxTillNow, ans);
    }
    return ans;
}
int main () {
    
    int arr[] = {1, 2, -3, 4, -6, 0, 6};
    int n = sizeof(arr)/sizeof(int);
    cout << maxProduct(arr, n) << endl;
    return 0;
}