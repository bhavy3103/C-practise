#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, p;
        cin >> a;
        p = a / 4;
        if (p == 1 && a % 4 == 0)
        {
            cout << "1" << endl;
        }
        else if (a % 4 == 0)
        {
            cout << p << endl;
        }
        else
        {
            cout << p + 1 << endl;
        }
    }

    return 0;
}