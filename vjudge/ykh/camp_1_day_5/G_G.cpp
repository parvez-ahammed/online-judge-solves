#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MOD = 1e9 + 7;

const int limit = 1e6 + 7;
int a[limit];

ll bexpo(ll x, ll y)
{
    ll ans = 1;

    while (y > 0) {
        if (y % 2 == 1)
            ans = (ans * x) % MOD;

        x = (x*x) % MOD;

        y /= 2;
    }

    return ans;
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    cout << bexpo(a[n] - 1, m) << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    a[1] = 2;
    for (int i = 2; i < limit - 1; i++) {
        a[i] = (a[i - 1] << 1) % MOD;
    }

    while (tc--) {
        solve();
    }
    return 0;
}
