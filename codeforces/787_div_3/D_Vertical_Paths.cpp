#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
const int N = 200005;

vector<vector<int>> vv;
vector<int> path;

void dfs(int root, vector<vector<int>> &tree)
{

    int n = tree[root].size();

    path.push_back(root);

    if (n == 0)
    {
        vv.push_back(path);
        path.clear();
        return;
    }

    for (int i = 0; i < n; i++)
        dfs(tree[root][i], tree);
}

void solve()
{

    vv.clear();
    path.clear();

    int n;
    cin >> n;
    vector<vector<int>> tree(n + 5);

    int x;

    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (x == i)
            root = x;
        else
        {
            tree[x].push_back(i);
        }
    }

    dfs(root, tree);

    cout << vv.size() << endl;

    for (int i = 0; i < vv.size(); i++)
    {

        cout << vv[i].size() << endl;
        for (int j = 0; j < vv[i].size(); j++)
            cout << vv[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}