#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const long long mod = 109546051211;
const int N = 10000000;

ll fact[N];

ll mulmod(ll x, ll y, ll mod)
{ // O(log y)
    ll ans = 0;
    while (y > 0) {
        if (y & 1) {
            ans = (ans + x) % mod;
        }
        x = (x + x) % mod;
        y >>= 1;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % mod;
    }

    ll ans = 1;

    for (int i = 1; i <= n; i++) {
        ans = mulmod(ans, fact[i], mod);
    }

    cout << ans << endl;
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