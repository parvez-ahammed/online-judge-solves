#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;

    map<int, vector<int>> adj;
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;

        mp[x]++;
        mp[y]++;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int root = 0;

    for (auto x : mp) {

        if (x.second == 1) {
            root = x.first;
            break;
        }
    }




    

    int cnt = 1;

    map<int, int> vis;

    while (cnt <= n) {
        cout << root << " ";
        vis[root] = 1;

        if (adj[root].size() == 1) {
            root = adj[root][0];
        } else {
            int first = adj[root][0];
            int second = adj[root][1];

            if (vis[first] == 1) {
                root = second;
            } else {
                root = first;
            }
        }

        cnt++;
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