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
    Car c1(2005, "Red");
    Car c2(c1);
    c2.info();
    return 0;
}