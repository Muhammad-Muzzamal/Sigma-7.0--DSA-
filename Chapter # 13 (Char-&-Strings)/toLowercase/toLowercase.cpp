#include <iostream>
#include <cstring>
using namespace std;
void toLowercase(char ch[], int n) {
    for(int i=0; i<n; i++) {
        if(ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
    cout << ch;
}
int main() {
    char ch[] = "Hello WorlD";
    int n = strlen(ch);
    toLowercase(ch, n);
    // cout << ch;

    return 0;
}