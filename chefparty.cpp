#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,k;
    cin >> t ;
    for( int i=1 ; i<=t ; i++)
    {
        cin >> n >> x >> k ;

        if((n*x) <= k)
        {
            cout << "YES" << endl  ;
        }
        else
        {
            cout << "NO"  << endl ;
        }
    } 
  return 0;
}