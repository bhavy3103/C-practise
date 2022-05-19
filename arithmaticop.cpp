#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,sum,sub,mul,div;
    cout << "Enter the Value of a b c and d respectively " ;
    cin >> a >> b >> c >> d ;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = (float) a/b;
    
    cout << " sum = " << sum << endl ;
    cout << " sub = " << sub << endl ;
    cout << " mul = " << mul << endl ;
    cout << " div = " << div  << endl ;

    return 0;

}