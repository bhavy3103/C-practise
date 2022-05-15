#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << " Enter the number " ;
    cin >> n ;

    cout << " Table of number " << n << " is " << endl ; 

    for (int i=1 ; i<=10 ; i++)
    {
        cout << n << " * " << i << " = "   << n*i << endl ; 
    }

  return 0;
}