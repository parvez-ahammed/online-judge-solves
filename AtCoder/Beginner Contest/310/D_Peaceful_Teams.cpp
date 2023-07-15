#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 1005;

vector<int> adj[MAX_N];
bool visited[MAX_N];

int dfs(int node) {
    visited[node] = true;
    int count = 1;
    for (int i = 0; i < adj[node].size(); i++) {
        int next = adj[node][i];
        if (!visited[next])
            count += dfs(next);
    }
    return count;
}

long long powerMod(int base, int exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main() {
    int N, M, T;
    cin >> N >> M >> T;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    long long totalWays = 1;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int count = dfs(i);
            totalWays = (totalWays * powerMod(T - 1, count)) % MOD;
        }
    }

    cout << totalWays << endl;

    return 0;
}
