#include <iostream>
using namespace std;
int tilingProblem(int n) {
    // base case
    if(n==0 || n==1) {
        return 1;
    }
    return tilingProblem(n-1) + tilingProblem(n-2);
}
int main() {
    int n = 5;
    cout << tilingProblem(n) << endl;
    return 0;
}