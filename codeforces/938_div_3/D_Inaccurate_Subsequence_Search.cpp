#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(n);

    map<int, int> mp, mp1;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        mp[b[i]]++;
        mp1[b[i]]++;
    }

    int ans = 0;
    deque<int> dq;
    map<int, int> t;
    int res = 0;
    for (int i = 0; i < n; i++) {
        dq.push_back(a[i]);
        t[a[i]]++;

        if (mp[a[i]] > 0) {
            res++;
            mp[a[i]]--;
        }

        if (dq.size() > m) {
            auto u = dq.front();
            dq.pop_front();
            t[u]--;
            if (mp1[u] != 0 && mp[u] < mp1[u] && t[u] < mp1[u]) {
                res--;
                mp[u]++;
            }
        }

        if (res >= k && dq.size() == m)
            ans++;
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