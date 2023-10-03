#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int l, r, m;

    cin >> r >> l >> m;

    int perMove = r - l;
    ll res = 0;

    res = (m % 2 == 0 ? (m / 2) * 1ll * perMove : (m / 2) * 1ll * perMove + r);

    cout << res << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}