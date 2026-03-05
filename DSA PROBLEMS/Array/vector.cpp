#include<iostream>
#include<vector>
using namespace std;
int main() {

    cout << "Program started\n";
    vector<int> vec1;
    // cout << vec1.size() << endl;
    // vec1.push_back(12);
    // cout << vec1.size() << endl;

    vector<int> vec2 = {1, 2, 3, 4};
    vec2.push_back(5);
    cout << vec2.at(4) << endl;

    for(int v : vec2) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}