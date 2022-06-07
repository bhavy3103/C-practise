#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, sum = 0, ct = 0;
        cin >> n >> l;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];

            if (sum >= l)
            {
                sum = sum - a[i];
            }
            else
            {
                cout << "NO" << i + 1 << endl;
                ct = 1;
                break;
            }
        }
        if (ct == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}