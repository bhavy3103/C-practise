#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number here : " ;
    cin >> n ;

    cout << "Factors of Number " << n << " are " ;

    for(int i=1 ; i<=n ; i++)
    {
        if(n % i == 0)
        {
            cout << i << "," ;
        }
    } 

  return 0;
}
