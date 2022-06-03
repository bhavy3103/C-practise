#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem,sum=0,temp;

    cout << "Enter the number here : " ;
    cin  >> n ;

    temp = n ;

    while(temp != 0)
    {
        rem = temp%10;
        sum = sum + rem*rem*rem ;
        temp = temp / 10 ;
    }

    if(sum==n)
    {
        cout << "Number " << n << " is Armstrong number " ;
    }
    else
    {
        cout << "Number " << n <<  " is not Armstrong number " ;
    }

  return 0;
}