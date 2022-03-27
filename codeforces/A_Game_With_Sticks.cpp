
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int n, m;
    cin >> n >> m;
    // if (n == m && (n % 2 == 0))
    // {
    //     cout << "Malvika";
    // }
    // else if (n == m && (n % 2 == 1))
    // {
    //     cout << "Akshat";
    // }
    // else if ( n < m || n >m)

    // {
    //     cout << "Malvika";
    // }
    int i = n < m ? n : m;
    //cout << i ;
     if ( i % 2 == 0 ){
         cout << "Malvika";
     }
     else if ( i % 2 == 1 ){
         cout << "Akshat";
     }

    return 0;
}