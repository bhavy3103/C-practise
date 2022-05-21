#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,max;

    cout << "Enter the three integer number here : " ;
    cin >> n1 >> n2 >> n3 ;

    max = (n1 > n2 > n3) ? ( (n1 > n2) ? n1 : n2) : ((n2 > n3) ? n2 : n3 ) ;
     
     cout << max ;
     
  return 0;
}