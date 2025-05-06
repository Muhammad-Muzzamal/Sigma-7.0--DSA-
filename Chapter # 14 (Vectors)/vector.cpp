#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    vector<int> vec1 = {1, 2, 3, 4 , 5};
    vector<int> vec2(5, -1); // vector of 5 size with values -1
    // cout << vec1.size() << "\n";
    for(int val : vec2) {
        cout << val << ", ";
    }

    return 0;
}