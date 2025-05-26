#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>
#include "function.h"
#include "Student.h"
#include "Car.h"
#include "User.h"
using namespace std;
int main() {
    Car c1(110837, "White");
    cout << c1.getmillage() << endl;
    Car c2(c1);
    cout << c2.getmillage() << endl;
    c2.setmillage(34);
    cout << c2.getmillage() << endl;
    cout << c1.getmillage() << endl;
    return 0;
}