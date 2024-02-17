#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
ll n, m, k;

bool check(ll mid)
{
    ll lcm = (n * m) / __gcd(n, m);
    ll cnt = (mid / n) + (mid / m) - 2 * (mid / lcm) ;
    return cnt >= k;
}
ll bs()
{
    ll l = 1, r = 1e18 + 5;

    while (l < r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    return r;
}
void solve()
{

    cin >> n >> m >> k;

    cout << bs() << endl;
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