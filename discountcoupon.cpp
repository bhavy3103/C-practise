#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, sum1 = 0, sum2 = 0;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 = sum1 + a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= y)
            {
                a[i] = 0;
            }
            else
            {
                a[i] = a[i] - y;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum2 = sum2 + a[i];
        }

        if (sum1 > sum2 + x)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}