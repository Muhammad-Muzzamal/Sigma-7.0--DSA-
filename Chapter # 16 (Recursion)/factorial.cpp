#include <iostream>
using namespace std;
int factorial(int n) {
    // base condition whose answer is known
    if(n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
    cout << factorial(5) << endl; 
    return 0;
}

/*
let discuss how it works 

n = 5;
---> factorial(5) = 5 * factorial(4)
---> factorial(4) = 4 * factorial(3)
---> factorial(3) = 3 * factorial(2)
---> factorial(2) = 2 * factorial(1)
---> factorial(1) = 1 * factorial(0)
---> factorial(0) = 1

factorial(0)-->1 
factorial(1)-->(1*1=1)
factorial(2) = 2 * factorial(1) --> 2 * 1 = 2
factorial(3) = 3 * factorial(2) --> 3 * 2 = 6
factorial(4) = 4 * factorial(3) --> 4 * 6 = 24
factorial(5) = 5 * factorial(4) -- > 5 * 24 = 96 (answer) return to main()



*/