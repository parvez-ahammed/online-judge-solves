#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MAXN = 200005;

vector<int> adj[MAXN];

int ind = 0;
vector<int>  order(MAXN);
int N, Q;
vector<int> COST(MAXN + 1);

void add(int node, int x)
{
    // add x from node to root


}
int print(int node)
{
    int x = 0;
   
    return x;
}

vector<pair<int, int>> range(MAXN, { INT_MAX, INT_MIN });

void dfs(int node, int parent)
{
    order[node] = ++ind;
    range[node].first = min(range[node].first, ind);

    for (auto i : adj[node]) {
        if (i != parent) {
            dfs(i, node);
            
        }
    }
    range[node].second = max(range[node].second, ind);
}

void printVector(vector<int> v)
{
    for (int i = 1; i <= N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
void solve()
{

    cin >> N >> Q;
    
    for (int i = 1; i <= N; i++) {
        cin >> COST[i];
    }
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);

    
    printVector(order);

    for (int i = 1; i <= N; i++) {
        cout << i << " " << range[i].first << " " << range[i].second << endl;
    }

    for (int i = 1; i <= N; i++) {
        add(order[i], COST[i]);
    }
    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int node, x;
            cin >> node >> x;
            x -= COST[node];
            COST[node] += x;
            add(order[node], x);
        } else {
            int x;
            cin >> x;

            cout << print(order[x] +1) - print(order[x] - 1) << endl;
        }
    }
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
