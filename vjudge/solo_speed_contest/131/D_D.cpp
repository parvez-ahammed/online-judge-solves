#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int ANS = 0;

vector<vector<int>> adj;

vector<int> ballCount;

vector<int> vis;

void solve()
{

    int n, m;
    cin >> n >> m;

    // there are some src and dest

   
    vis.resize(n + 1, false);
    vis[1] = true;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;

        if (vis[u]) {
            vis[v] = true;
        }
        ballCount[u]--;
        ballCount[v]++;
        if (ballCount[u] == 0) {
            vis[u] = false;
        }
    }

    for (int i = 1; i <= n; i++) {
        ANS += (vis[i]);
    }

    cout << ANS << endl;
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