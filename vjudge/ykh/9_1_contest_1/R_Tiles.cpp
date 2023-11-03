#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 998244353;

void solve()
{

    int w, h;

    // 1st tile can rotated 4 ways
    // border tiles can be rotated 2 ways
    // middle tiles can be rotated 1 way

    // sum represents total number of tiles in the border except the first tile
    cin >> w >> h;

    int sum = w + h - 2;
    int ans = 4;

    for (int i = 1; i <= sum; i++) {
        ans = (2ll * ans % mod);
    }

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