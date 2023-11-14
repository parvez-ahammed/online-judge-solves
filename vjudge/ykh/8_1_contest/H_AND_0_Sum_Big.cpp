#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9 + 7;
void solve()
{

    int n, k;
    cin >> n >> k;

    int ans = 1;

    for (int i = 1; i <= k; i++) {
        ans = 1ll * ans * n % mod;
    }

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