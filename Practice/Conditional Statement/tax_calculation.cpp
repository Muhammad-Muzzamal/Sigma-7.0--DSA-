#include <iostream>
using namespace std;
int tax_amount(int income, float tax_percentage) {
    float taxed_amount = income * (tax_percentage / 100);
    return taxed_amount;
}
int main() {

    cout << tax_amount(100, 5) << endl;
    
    return 0;
}