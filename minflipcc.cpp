#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (sum == 0)
            cout << sum / 2 << endl;
        else if (sum > 0 && sum % 2 == 0)
            cout << sum / 2 << endl;
        else if (sum > 0 && sum % 2 == 1)
            cout << "-1" << endl;
        else if (sum < 0 && abs(sum) % 2 == 0)
            cout << abs(sum) / 2 << endl;
        else if (sum < 0 && abs(sum) % 2 == 1)
            cout << "-1" << endl;
    }
    return 0;
}