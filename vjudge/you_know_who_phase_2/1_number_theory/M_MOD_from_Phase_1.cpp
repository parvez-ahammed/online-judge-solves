#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll mul(ll a, ll b, ll mod)
{
    return __int128(a) * b % mod;
}

ll power(ll a, ll b, ll mod)
{
    ll ans = 1 % mod;
    while (b) {
        if (b & 1)
            ans = mul(ans, a, mod);
        a = mul(a, a, mod);
        b >>= 1;
    }
    return ans;
}

ll inverse(ll a, ll mod)
{
    return power(a, mod - 2, mod);
}
void solve()
{
    ll a, b, mod;
    cin >> a >> b >> mod;
    cout << power(a, b, mod) << '\n';
    cout << mul(a, b, mod) << '\n';
    cout << mul(a, inverse(b, mod), mod) << '\n';
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}