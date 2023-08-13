#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

vector<int> parent[3000];

int level = 0;
int ans = INT_MIN;

void dfs(int root, int level)
{
    int n = parent[root].size();
    ++level;
    ans = max(ans, level);
    for (int i = 0; i < n; i++)
        dfs(parent[root][i], level);
}

int32_t main()
{

    FAST;
    int n, x;
    cin >> n;
    vector<int> roots;
    for (int i = 1; i <= n; i++)
    {

        cin >> x;

        if (x == -1)
            roots.push_back(i);
        else

            parent[x].push_back(i);
    }

    for (int i = 0; i < roots.size(); i++)
        dfs(roots[i], 0);

    cout << ans << endl;

    return 0;
}
