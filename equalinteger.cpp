#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (a < b)
            {
                cout << b - a << endl;
            }
            else if (a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0)
            {
                cout << (a - b) / 2 << endl;
            }
            else
            {
                if (a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0)
                {
                    cout << ((a - b + 1) / 2) + 1 << endl;
                }
            }
        }
    }
    return 0;
}