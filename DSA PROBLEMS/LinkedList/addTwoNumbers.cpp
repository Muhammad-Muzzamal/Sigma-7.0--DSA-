<<<<<<< HEAD
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {2, 4, 3};
    list<int> l2 = {5, 6, 4};
    list<int> ans;
    int sum1 = 0;
    int sum2 = 0;

    for (int &l : l1)
    {
        sum1 = (sum1 * 10) + l;
    }
    for (int &l : l2)
    {
        sum2 = (sum2 * 10) + l;
    }

    cout << "Sum1 : " << sum1 << endl;
    cout << "Sum2 : " << sum2 << endl;

    int total = sum1 + sum2;
    cout << "Total : " << total << endl;

    while (total > 0)
    {
        int lastDigit = total % 10;
        ans.push_back(lastDigit);
        total /= 10;
    }

    for (int &l : ans)
    {
        cout << l << " ";
    }
    cout << endl;


    
    return 0;
=======
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {2, 4, 3};
    list<int> l2 = {5, 6, 4};
    list<int> ans;
    int sum1 = 0;
    int sum2 = 0;

    for (int &l : l1)
    {
        sum1 = (sum1 * 10) + l;
    }
    for (int &l : l2)
    {
        sum2 = (sum2 * 10) + l;
    }

    cout << "Sum1 : " << sum1 << endl;
    cout << "Sum2 : " << sum2 << endl;

    int total = sum1 + sum2;
    cout << "Total : " << total << endl;

    while (total > 0)
    {
        int lastDigit = total % 10;
        ans.push_back(lastDigit);
        total /= 10;
    }

    for (int &l : ans)
    {
        cout << l << " ";
    }
    cout << endl;


    
    return 0;
>>>>>>> array-practice
}