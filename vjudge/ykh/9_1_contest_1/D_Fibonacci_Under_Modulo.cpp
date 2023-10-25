#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 998244353;
int memo[1000001];

int fib(int n)
{
    if (memo[n] != -1)
        return memo[n];
    if (n == 0 || n == 1)
        return n;

    return memo[n] = (fib(n - 1) + fib(n - 2)) % mod;
}

void solve()
{

    memset(memo, -1, sizeof(memo));
    memo[0] = 0;
    memo[1] = 1;
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}