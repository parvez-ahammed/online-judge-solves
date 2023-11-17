#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9 + 7;

void solve()
{

    int n, m;
    cin >> n >> m;

    int totalOr = 0;
    for (int i = 0; i < m; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        totalOr |= x;
    }

    int ans = 1;

    for (int i = 1; i < n; i++) {
        ans = (ans * 2) % mod;
    }

    ans = 1LL * ans * totalOr % mod;

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