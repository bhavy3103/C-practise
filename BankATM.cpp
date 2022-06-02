// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a;
//     float t,p,q;

//     cin >> a >> t ;

//     if(a%5==0)
//     {
//         if(a<=t)
//        {
//           p=(t-a) - 0.50;
//           cout << fixed << setprecision(2) << p ;
//        }

//         else
//        {
//           cout << fixed << setprecision(2) << t ;
//        }

//     }

//     else 
//     {
//         cout << fixed << setprecision(2) << float(t) ;
//     }

//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    float b;
    cin >> a >> b;
    if (a % 5 == 0 && a<=b -0.5) 
    {
       b = b-a-0.50;
       cout << fixed <<setprecision(2) <<b;
    }
    else
    {
       cout << fixed << setprecision(2) << b;
    }
    return 0;
}