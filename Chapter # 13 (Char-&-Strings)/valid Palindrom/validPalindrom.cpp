#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool isPalindrom(char ch[], int n) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        if(ch[start] != ch[end]) {
            cout << "Invalid Palindrom !\n";
            return false;
        }
        start++;
        end--;
    }
    cout << "vaid Palindrom ! \n";
    return true;
}
int main() {
    char ch[] = "racecr";
    int n = strlen(ch);
    isPalindrom(ch, n);

    return 0;
}