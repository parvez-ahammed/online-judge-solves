
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int MOD = 1e9 + 7;

long long modularExponentiation(long long base, long long exponent)
{
    long long result = 1;
    base = base % MOD;
    while (exponent > 0) {

        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}
int dfs(int v, const vector<int>& adj, vector<bool>& visited)
{
    visited[v] = true;
    int length = 1;
    int next = adj[v];
    if (next != -1 && !visited[next]) {
        length += dfs(next, adj, visited);
    }
    return length;
}

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<int> adj(n, -1);
    vector<int> inDegree(n, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u] = v;
        inDegree[v]++;
    }

    vector<int> chainLengths;
    vector<bool> visited(n, false);

    for (int i = 1; i <= n; i++) {

        if (!visited[i] && inDegree[i] == 0) {
            int chainLength = dfs(i, adj, visited);
            chainLengths.push_back(chainLength);
        } else if (!visited[i]) {
            chainLengths.push_back(1);
        }
    }

    int sz = chainLengths.size();
    ll sum = 0;
    for (int length : chainLengths) {
        cout << length << " "<< sum << endl;
        sum += (modularExponentiation(length, sz - 1)) % MOD;

    }
    cout << sum << endl;
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