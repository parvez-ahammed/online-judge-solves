#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 1e6 + 9;
vector<int> adj[N];
int sz[N];
int k;

bool dfs(int v, int mid, int p = -1)
{
    sz[v] = 1;
    for (int u : adj[v]) {
        if (u == p)
            continue;
        if (!dfs(u, mid, v))
            return 0;
        sz[v] += sz[u];
    }
    if (sz[v] >= mid) {
        sz[v] = 0;
        k--;
    }

    
    return k >= 0;
}

bool check(int mid, int t)
{
    k = t;
    return dfs(1, mid);
}

void solve()
{

   

    int n;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        sz[i] = 0;
    }
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int l = 1, r = n, ans = 1;
    int t = k;

    while (l <= r) {
        int m = (l + r) / 2;
        bool ok = 0;
        if (check(m , t)) {
            ans = m;
            r = m - 1;
        } else
            l = m + 1;
    }
    cout << ans - 1 << endl;
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