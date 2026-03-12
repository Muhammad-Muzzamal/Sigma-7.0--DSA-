#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    for(int i = digits.size() - 1; i >= 0; i--) {
        if(digits[i] < 0) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}
int main() {
    vector<int> digits = {9};
    vector<int> ans = plusOne(digits);
    for(int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}