#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9 + 7;

int power(ll x, ll n, ll mod)
{ 
    // O(log n)
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

void solve()
{

    int a, b, c;

    cin >> a >> b >> c;

    a = a % mod;

    // a^b^c

    if (c == 0 ) {
        cout << a << endl;
        return;
    }
    if (b == 0) {
        cout << 1 << endl;
        return;
    }
    if (a == 0) {
        cout << a << endl;
        return;
    }

    // fermat's little theorem
    // a^(p-1) = 1 (mod p)

    int x = power(b, c, mod - 1);
    int ans = power(a, x, mod);
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}