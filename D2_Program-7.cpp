#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, ch, br = 1;
    cout << "Enter number of items: ";
    cin >> n;
    string s, s1;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    do
    {
        cout << "Enter 1 for deletion, 2 for insertion and 3 for printing: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter item to be deleted: ";
            cin >> s1;
            for (auto itr = v.begin(); itr != v.end();)
            {
                if (*itr == s1)
                {
                    v.erase(itr++);
                }
                else
                    ++itr;
            }
            break;
        }
        case 2:
        {
            int pos, ct = 0;
            cout << "Enter item to be inserted: ";
            cin >> s1;
            cout << "Enter location to be inserted: ";
            cin >> pos;
            for (auto itr = v.begin(); itr != v.end();)
            {
                if (ct == pos - 1)
                {
                    v.insert(itr++, s1);
                }
                else
                    ++itr;
                ct++;
            }
            break;
        }
        case 3:
        {
            int nn = 1;
            cout << "Vector Elements: \n";
            for (auto &ele : v)
            {
                cout << nn++ << ". " << ele << "\n";
            }
            cout << "\n";
            break;
        }
        default:
        {
            cout << "Wrong choice\n";
            break;
        }
        }
        cout << "Enter 0 to terminate: ";
        cin >> br;
    } while (br != 0);
    return 0;
}