#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> vec;
    vec.push_back(1);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ", ";
    }
    
    return 0;
}