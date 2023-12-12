#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;

    for (ll i = l; i <= r; i += 2)
        cout << i << " " << i + 1 << endl;
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