
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int n ;
   cin >> n;
   bool is_lucky = true;
   int n_temp = n;

   while (n_temp)
   {
       if (n_temp%10 == 4 || n_temp% 10 == 7)
       {
           is_lucky = true;
       }
       else 
       {
           is_lucky = false;
           break;
       }

       n_temp/=10;
   }

   if ( is_lucky ||  n%4 == 0 || n%7 == 0 || n%47 == 0 || n%744 == 0 )
   {
       cout << "YES";
   }
   else 
   {
       cout << "NO";
   }

    return 0;
}