#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

map<int, int> parent;

vector<int> path;

void dsu(int child)
{

    path.push_back(child);

    if (child == 1)
        return;

    dsu(parent[child]);
}

int32_t main()
{

    FAST;

    int n, x;

    cin >> n;

    for (int i = 2; i <= n; i++)
        cin >> parent[i];

    dsu(n);

    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
        cout << path[i] << " ";
    return 0;
}
