#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector <ll> dp(100000 , -1);

ll cnt ;
int fib(ll n)
{
    if (n == 1 ) return 0;
    if (n == 2 ) return 1;

    cnt++;

    if (dp[n] != -1) return dp[n];
    return  dp[n] = fib(n-1) + fib(n-2);
}

int32_t main()
{
    ll n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

