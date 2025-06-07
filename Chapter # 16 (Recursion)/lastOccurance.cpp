#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> vec, int target, int i) {
    if(i == vec.size()) {
        return -1;
    }
    int index = lastOccurance(vec, target, i+1);
    if(index == -1 && vec[i] == target) {
        return i;
    }
    return index;
}
int main() {
    vector<int> vec = {1, 2, 2, 3, 3, 4, 5};
    cout << lastOccurance(vec, 3, 0) << endl;
    return 0;
}