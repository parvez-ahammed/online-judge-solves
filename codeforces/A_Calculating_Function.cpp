
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>
typedef long long ll;

int main()
{
    ll n;
    
    ll j = -1;

    cin >> n;

    //! not used for time complexity
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += (i * j);
    //     j *= -1;
    // }
    
    
    ll sum = (n%2 == 0) ? (n/2) : (((n + 1) / 2) * j) ;
    

    cout << sum;

    return 0;
}