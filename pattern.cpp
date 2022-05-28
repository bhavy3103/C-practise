#include<iostream>
using namespace std;

int main()
{ 
    cout << " Enter the number how many times you want this perform : " ;
    int t;
    cin >> t;
    while(t--)
    {
        int i,j,r;
        cout << " Enter the number of raw here: " ;
        cin >> r ;
        for(i=1;i<=r;i++)
        {
          for(j=1;j<=i;j++)
           {
             cout << "*" ;
           }
        cout <<  endl ;
        } 
    }


}