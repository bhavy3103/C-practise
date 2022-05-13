#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int sum=1;

    cout << " Enter the number : " ;
    cin >> n ;

    for ( int i=1 ; i<=n ; i++)
    {
        sum =+ sum*i ;
    }

    cout << " Factorial of Number " << n << " is = " << sum ;

  return 0;
}