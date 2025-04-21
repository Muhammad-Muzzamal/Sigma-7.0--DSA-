#include <iostream>
#include <climits>
using namespace std;
int profit(int *price, int n) { //time complexity = O(n+n) -> O(2n) -> O(n) (ignore contants)
    int bestBuy[100000];//10^5 constrains 
    bestBuy[0] = INT_MAX;
    for (int i = 1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);
        cout << bestBuy[i] << ", ";
    }
    cout << endl;

    int maxProfit = 0; //if profit is negative we return 0 not negative value 
    for(int i=0; i<n; i++) {
        // int currentProfit = sell - buy;
        int currentProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit, currentProfit);
    }    
    cout <<"MAx Profit : "<< maxProfit << endl;
     
}
int main () {
    int price[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(price) / sizeof(int);
    profit(price, n);
    
    return 0;
}