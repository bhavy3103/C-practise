#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1 ; i<=t ; i++)
    {
        int a,b;
        cin >> a >> b ;
        if((a*1.07) >= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
  return 0;
}