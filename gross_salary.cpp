#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   
    cin >> n ;
     float gs[n],a[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin >> a[i];
        if(a[i]<1500)
        {
            gs[i]= a[i] + a[i]*0.10 + a[i]*0.90 ;
        }
        else
        {
            gs[i]= a[i] + 500 + a[i]*0.98 ;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << gs[i] << endl ;
    }
    
  return 0;
}