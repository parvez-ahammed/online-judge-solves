#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    ll x;
    cin >> x;

    pair<ll, ll> ans;


    for (int i = 1; 1ll * i * i <= x; i++) {
        if (x % i == 0) {
            ll a = i;
            ll b = x / i;

            if (__gcd(a, b) == 1) {
                ans.first = a;
                ans.second = b;
            }
        }
    }

    cout << ans.first << " " << ans.second;
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