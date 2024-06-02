#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = max(a * c, max(a * d, max(b * c, b * d)));
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