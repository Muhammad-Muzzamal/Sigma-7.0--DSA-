#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5},
                                  {7} };
    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[i].size(); j++) {
        cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// this is possible in 2d vectors but not on 2d arrays 