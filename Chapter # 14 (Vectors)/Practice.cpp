#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    for(int i=0; i<5; i++) {
        vec.push_back(i);
    }
    cout <<"Size : " << vec.size() << endl;
    cout <<"Capacity : " << vec.capacity() << endl;
    return 0;
}