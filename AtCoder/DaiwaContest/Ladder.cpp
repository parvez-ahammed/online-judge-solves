#include <bits/stdc++.h>
using namespace std;

const int MAX = 4e5 + 5;
vector<int> graph[MAX];
vector<int> val(MAX);
bool visited[MAX];
int ans = 1;

void dfs(int a)
{
    visited[a] = true;
    for (auto u : graph[a])
    {
        if (!visited[u])
        {

            ans = max(ans, val[u]);

            dfs(u);
        }
    }
}
int main()
{

    int n;
    cin >> n;

    int a, b;

    map<int, int> mp;

    int cnt = 0;
    int root = 1;

    mp[root] = ++cnt;
    val[cnt] = root;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        // cout << a  << " "<< b << endl;

        if (mp.count(a) == 0)
            mp[a] = ++cnt, val[cnt] = a;
        if (mp.count(b) == 0)
            mp[b] = ++cnt, val[cnt] = b;

        a = mp[a];
        b = mp[b];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(mp[1]);

    cout << ans << endl;

    return 0;
}


