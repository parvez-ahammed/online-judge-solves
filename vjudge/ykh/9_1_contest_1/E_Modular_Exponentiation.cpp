#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"



int bexpo(int x, int n, int mod = 998244353)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

void solve()
{

    int n, m;

    cin >> n >> m;

    if (n >= 30)
    {
        cout << m << endl;
    }
    else
    {
        cout << m % bexpo(2, n) << endl;
    }
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