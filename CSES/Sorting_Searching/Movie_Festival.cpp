#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ y, x });
    }
    sort(v.begin(), v.end());

    int ans = 1, currEnd = v[0].first;

    for (int i = 1; i < n; i++) {
        if (v[i].second >= currEnd) {
            ans++;
            currEnd = v[i].first;
        }
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