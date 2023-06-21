#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)
vi heuristic(2e5 + 5, 0);
vi leafs(2e5 + 5, 0);
int dfs(vector<vector<int>> tree, int root)
{
    int leafCount = 0;

    stack<int> s;
    vector<bool> visited(tree.size());
    visited[root] = true;

    s.push(root);

    while (!s.empty())
    {

        int curr = s.top();
        visited[curr] = true;
        s.pop();

        int currChilds = tree[curr].size();

        for (int i = 0; i < currChilds; i++)
        {

            int node = tree[curr][i];
            if ((!visited[node] && heuristic[node] > heuristic[curr]) || (!visited[node] && root == 1))
            {
                s.push(node);

                if (tree[node].size() == 1 && node != 1)
                {
                    leafCount++;
                    leafs[node] = 1;
                }

                if (root == 1)
                    heuristic[node] = heuristic[curr] + 1;
            }
        }
    }

    if (leafCount == 0)
        leafCount++;

    return leafCount;
}

void countLeafNodes(vector<vector<int>> tree)
{
    int n = tree.size() - 3;

    heuristic[1] = 1;
    rep(1, n + 1)
    {
        if (leafs[i] == 0)
            leafs[i] = dfs(tree, i);
        
    }
}

void solve()
{
    int n, q;
    cin >> n;
    vector<vector<int>> tree(n + 3);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    countLeafNodes(tree);

    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << leafs[x] * leafs[y] << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {

        solve();

        vi empty(2e5 + 5, 0);

        leafs = empty;
        heuristic = empty;
    }
    return 0;
}