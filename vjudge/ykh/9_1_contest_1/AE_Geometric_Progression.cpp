#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int power(int x, ll n, int mod)
{ // O(log n)
    int ans = 1 % mod;
    while (n > 0) {
        if (n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int sum(ll a, ll x, ll mod)
{

    if (x == 0) {
        return 1 % mod;
    }

    int ans = 0;

    if (x & 1) {
        ll part = (x >> 1);
        int curr = sum(a, part, mod);
        ans = (curr + 1ll * curr * power(a, part + 1, mod) % mod) % mod;
    } else {

        ans = (sum(a, x - 1, mod) + power(a, x, mod)) % mod;
    }

    return ans;
}

// a^11
// a1 + a2 + a3 + a4 + a5 + a6  + a6(a1 + a2 + a3+ a4 + a5)
// a1 + a2 + a3 + a4()

void solve()
{
    int a, mod;
    ll x;
    cin >> a >> x >> mod;

    // cout << 11/2 << endl;

    cout << sum(a, x - 1, mod) << endl;
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
