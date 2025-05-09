#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout << "Program start...\n";
    vector<int> vec = {1, 2, 3, 4, 9, 6, 7, 8, 9, 10};
    for(int i=0; i<vec.size(); i++) {
        if(vec[i]+1 != vec[i+1]) {
            cout << vec[i] << endl;
        }
    }
    cout << endl;
    return 0;
}