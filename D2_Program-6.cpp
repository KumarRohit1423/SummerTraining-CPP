#include <iostream>
#define ll long long
using namespace std;
ll small_fact(ll n) // limit 25!
{
    if (n == 0)
        return 1;
    else
        return (n * small_fact(n - 1));
}
int main()
{
    ll n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial: " << small_fact(n);
    return 0;
}