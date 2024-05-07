#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;

    vector<map<int, int>> g(n + 5);

    while (m--) {
        int k, c;
        cin >> k >> c;

        vector<int> a(k);

        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {

                if (g[a[i]].find(a[j]) != g[a[i]].end()) {
                    g[a[i]][a[j]] = min(g[a[i]][a[j]], c);
                    g[a[j]][a[i]] = min(g[a[j]][a[i]], c);
                } else {
                    g[a[i]][a[j]] = c;
                    g[a[j]][a[i]] = c;
                }
            }
        }
    }

    vector<bool> vis(n + 1, false);
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : g[u]) {
            if (!vis[v.first]) {
                vis[v.first] = true;
                q.push(v.first);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << -1 << endl;
            return;
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        for (auto j : g[i]) {
            ans += j.second;
        }
    }

    cout << ans / 2 << endl;
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