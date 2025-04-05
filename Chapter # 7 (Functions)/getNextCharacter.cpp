#include<iostream>
using namespace std;
char getNextCharacter(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else if (ch == 'Z') 
    {
        return 'A';
    }
    
    return ch+1;
}
int main()
{
    cout << getNextCharacter('b') << endl;
    
    return 0;
}