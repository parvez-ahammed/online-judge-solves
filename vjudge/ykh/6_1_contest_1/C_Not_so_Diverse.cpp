#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1);
    map<int, int> mp;
    vector<pair<int, int>> vp;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    for (auto x : mp) {
        vp.push_back({ x.second, x.first });
    }

    sort(vp.begin(), vp.end());

    if (vp.size() <= k) {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;

    for (int i = 0; i < vp.size() - k; i++) {
        cnt += vp[i].first;
    }

    cout << cnt << endl;
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