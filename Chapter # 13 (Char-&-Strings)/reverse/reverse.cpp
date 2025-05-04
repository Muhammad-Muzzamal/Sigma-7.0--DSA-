#include <iostream>
#include <cstring>
using namespace std;
void reverse(char ch[], int n) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
    cout << ch;
    
}
int main() {
    char ch[] = "mam";
    int n = strlen(ch);
    reverse(ch, n);
    return 0;
}