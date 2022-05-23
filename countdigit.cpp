#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d=0 ;
    cout << "Enter the number here : " ;
    cin >> n ;

    while(n!=0)
    {
        n=n/10;
        d++;
 
    }   

    cout << " Number of digits are : " << " " << d ;

  return 0; 
}