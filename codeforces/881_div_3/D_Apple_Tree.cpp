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

int dfs(vector<vector<int>> tree, int root)
{
    int leafCount = 0;

    stack<int> s;

    // cout << "FOR " << root << endl;

    vector<bool> visited(tree.size());


    s.push(root);

    while (!s.empty())
    {

        int curr = s.top();
        visited[curr] = true;
        s.pop();

        int currChilds = tree[curr].size();
        // cout << curr << " " << currChilds << endl;

        for (int i = 0; i < currChilds; i++)
        {
            // cout << " HIT" << endl;
            int node = tree[curr][i];
            if (!visited[node] && node > curr)
            {
                s.push(node);
                // cout << node << " " << " size " ;
                if (tree[node].size() == 1 )
                    leafCount++;
                
            }
        }

        // cout << endl;
    }

    if (leafCount == 0)
        leafCount++;
    // cout << "END " << endl;
    return leafCount;
}

vi countLeafNodes(vector<vector<int>> tree)
{
    int n = tree.size() - 3;

    vector<int> leafCount(n + 3, 0);

    for (int i = 1; i <= n; ++i)
    {
        leafCount[i] = dfs(tree, i);
    }
    // cout << endl;

    return leafCount;
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

    cin >> q;
    vector<int> leafCount = countLeafNodes(tree);

    // cout << "HELLO WORLD" << endl;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 0; j < tree[i].size(); j++)
    //      {
    //          cout << tree[i][j] << " ";
    //      }
    //      cout << endl;
    //  }

    // std::vector<int> leafCount = countLeafNodes(tree);

    // rep(1, n + 1) cout << leafCount[i] << " ";
    // cout << endl;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << leafCount[x] * leafCount[y] << endl;
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
    }
    return 0;
}