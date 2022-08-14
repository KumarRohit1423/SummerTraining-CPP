#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n, nn = 0, no;
    cout << "Enter number: ";
    cin >> n;
    no = n;
    int ct = 0, d;
    while (n > 0)
    {
        ct++;
        d = n % 10;
        nn = (nn * 10) + d;
        n /= 10;
    }
    if (no == nn)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";
    return 0;
}