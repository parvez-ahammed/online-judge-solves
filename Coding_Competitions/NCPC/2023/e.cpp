#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 5e5 + 5;
vector<int> A(MAXN);
vector<vector<int>> adj(MAXN);
vector<int> vis(MAXN);
vector<ll> ans(MAXN);

void dfs(int u, int previousMax, int depth, ll parentSum)
{
    

    vis[u] = 1;
    //cout << u << " ans[u] " << ans[u] << endl;
    if (A[u] > previousMax) {
        ans[u] = 1ll * A[u] * depth;
    } else {
        ans[u] += parentSum;
    }
    previousMax = max(previousMax, A[u]);
    parentSum += A[u];

    //cout << u << " ans[u] " << ans[u] << endl;

    for (int v : adj[u]) {
        if (vis[v]) {
            continue;
        }
        dfs(v, previousMax, depth + 1, parentSum );
    }
}
void solve()
{
    int n;
    cin >> n;

    A.clear();
    adj.clear();

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        ans[i] = A[i];
    }

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, 1 , 0);

    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}