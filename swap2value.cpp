#include<iostream>
using namespace std;
 
int main()
{
     // with using temporary variable
     int a,b,c=0;
     cout << " Enter the value of a here: " ;
     cin >> a ;
     cout << " Enter the value of b here: ";
     cin >> b ;
      
    c=a;
    a=b;
    b=c;
    
    cout << " Value of a is : " << a << endl ;
    cout << " Value of b is : " << b << endl;


    // Without using Temporary variable

    int x,y;

    cout << " Enter the value of x here : " ;
    cin >> x ;
    cout << "Enter the value of y here : " ;
    cin >> y ;

    x=x+y;
    y=x-y;
    x=x-y;

    cout << " Value of x is :  " << x << endl ;
    cout << " Value of y is : " << y  << endl ;

    return 0;

}