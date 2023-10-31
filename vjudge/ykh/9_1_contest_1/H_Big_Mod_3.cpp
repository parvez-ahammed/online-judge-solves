#include <bits/stdc++.h>
using namespace std;
#define i128  __int128
#define ull unsigned long long int
#define endl "\n"

ull mulmod(ull x, ull y, i128 mod)
{
    ull ans = 0;
    while (y > 0) {
        if (y & 1) {
            ans = ((i128)ans + x) % mod;
        }
        x = ((i128)x + x) % mod;
        y >>= 1;
    }
    return ans;
}

ull power(ull x, ull n, i128 mod)
{
    ull ans = 1 % mod;
    while (n) {
        if (n & 1) {
            ans = mulmod(ans, x, mod);
        }
        x = mulmod(x, x, mod);
        n >>= 1;
    }
    return ans;
}

void solve()
{

    ull a, b;
    string val;
    cin >> a >> b >> val;
    i128 m = 0;

    for (auto x : val) {
        m = m * 10 + (x - '0');
    }

    cout << power(a, b, m) << endl;
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