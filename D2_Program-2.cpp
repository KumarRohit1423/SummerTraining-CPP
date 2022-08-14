#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter End limit: ";
    cin >> n;
    vector<bool> sie((n + 1), true);
    sie[0] = false;
    sie[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (sie[i] && (i * i) <= n)
        {
            for (int j = i * i; j <= n; j += i)
                sie[j] = false;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (sie[i] == true)
        {
            cout << i;
            if (i != n)
                cout << " ";
        }
    }
    return 0;
}