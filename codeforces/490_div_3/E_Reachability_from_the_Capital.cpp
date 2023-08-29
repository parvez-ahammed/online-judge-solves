#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

map<int, vector<int>> adj;

vector<int> visited;

int root;

int par[5000 + 7];
int y;
void dfs(int s, int parent = -1)
{
    if (visited[s])
        return;
    visited[s] = true;
    for (auto x : adj[s]) {
        {
            if (x != y)
                par[x] = s;
            dfs(x, s);
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s;
    cin >> n >> m >> s;

    visited.resize(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int cnt = 0;

    root = s;

    memset(par, -1, sizeof(par));
    // visiting for the first time and marking them as 1
    y = -1;
    dfs(s);
   
    for (int i = 1; i <= n; i++) {
        y = i;
        dfs(i);
    }

    par[root] = 1;
    for (int i = 1; i <= n; i++) {
        if (par[i] == -1) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}