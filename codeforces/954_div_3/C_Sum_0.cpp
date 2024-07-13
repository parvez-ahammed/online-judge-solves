#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    ll sum = 0;

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;

        ans[i] = v[i].first;
        sum += ans[i];
    }

    for (int i = 0; i < n; i++) {

        auto [l, r] = v[i];
        if (sum  < 0) {
            ll adjust = min(1ll * r - l, -sum);
            ans[i] += adjust;
            sum += adjust;
        }
    }

    if (sum != 0) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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