#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

vector<int> graph[10];
map<char, int> mp;
vector<char> track(1000);
bool dfs(int src, int des)
{

    bool canVisit = false;
    int n = graph[src].size();

    for (int i = 0; i < n; i++)
    {
        int adj = graph[src][i];

        if (adj == des)
            canVisit = true;
        else
            canVisit = dfs(adj, des);

        if (canVisit)
            break;
    }

    return canVisit;
}
void solve()
{
    char src, des;
    cin >> src >> des;

    int s = mp[src];
    int d = mp[des];

    (dfs(s, d)) ? cout << "YES" << endl
                : cout << "NO" << endl;
}
int32_t main()
{

    FAST;

    int id = 1;

    for (int i = 1; i <= 4; i++)
    {

        char src, d1, d2, des;
        cin >> src >> d1 >> d2 >> des;
        int s, d;

        if (mp.count(src) == 0)
        {
            mp[src] = id;
            ++id;
        }

        if (mp.count(des) == 0)
        {
            mp[des] = id;
            ++id;
        }
        track[mp[src]] = src;
        track[mp[des]] = des;

        s = mp[src];
        d = mp[des];

        (d1 == '<') ? graph[d].push_back(s) : graph[s].push_back(d);
    }

    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}