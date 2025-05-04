#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char str1[] = "hello";
    char str2[] = "world";
    strcat(str1, " "); // Add space to str1 = "hello "
    strcat(str1, str2); // add str2 to str1 = "hello world"
    cout << str1 << endl;
    return 0;
}