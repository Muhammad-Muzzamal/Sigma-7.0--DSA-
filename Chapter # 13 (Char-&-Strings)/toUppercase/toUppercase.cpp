#include <iostream>
#include <cstring>
using namespace std;
void display(char str[], int n) {
    for(int i=0; i<n; i++) {
        cout << str[i];
    }
    cout << endl;
}
void toUppercase(char str[], int n) {
    for (int i = 0; i < n; i++)
    {   
        if (str[i]>='A' && str[i]<='Z')
        {
         continue;   
        }
        else{
            str[i] = str[i] - 'a' + 'A';
        } 
    }
    // display(str, n);
}
int main() {
    char str[] = "HellO World";
    int n = strlen(str);
    // cout << n;
    toUppercase(str, n );
    display(str, n); // print HELLOWORLD
    cout << str; // print HELLO 
    return 0;
}