#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9;
ll ommitZero(ll x)
{
    while (x % 10 == 0 and x != 0)
        x /= 10;
    return x % mod;
}

void solve(int n, int m)
{
    // n ! / (n - m) !
    // (n -m + 1) * (n - m + 2) * (n - m + 3) * ... * n
    ll ans = 1;
    int limit = (n - m) + 1;

    // for (int i = limit; i <= n; ++i)
    for (int i = n; i >= limit; i--) {
        ans *= i;
        ans = ommitZero(ans);
    }

    cout << ans % 10 << '\n';
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while (cin >> n >> m) {
        solve(n, m);
    }
    return 0;
}