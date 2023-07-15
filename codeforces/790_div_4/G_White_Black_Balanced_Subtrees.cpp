#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define vi vector<int>
#define rep(start, x) for (int i = start; i < x; i++)

vector<vector<int>> tree;
vector<pair<int, int>> subtreeColor;
string color;

int cnt = 0;

pair<int, int> dfs(int root)
{
    color[root] == 'W' ? subtreeColor[root].first++ : subtreeColor[root].second++;

    for (int i = 0; i < tree[root].size(); i++)
    {
        auto p = dfs(tree[root][i]);
        subtreeColor[root].first += p.first;
        subtreeColor[root].second += p.second;
    }

    cnt += (subtreeColor[root].first == subtreeColor[root].second ? 1 : 0);

    return subtreeColor[root];
}

void solve()
{
    int n;
    tree = vector<vector<int>>(5000);
    subtreeColor = vector<pair<int, int>>(5000);
    int x;
    cnt = 0;

    cin >> n;

    rep(2, n + 1) cin >> x, tree[x].push_back(i);

    cin >> color;
    color.insert(color.begin(), '#');

    dfs(1);

    cout << cnt << endl;
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