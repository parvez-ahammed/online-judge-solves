#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }

    multiset<int> pos;
    int res = INT_MAX;

    for (int i = 1; i <= n; i++) {
        pos.insert(mp[i]);

        if (i > k) {
            pos.erase(pos.find(mp[i - k]));
            res = min(res, *pos.rbegin() -*pos.begin());
        }
    }

    cout << res << endl;
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