#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int N = 3e5 + 5;

vector<pair<int, int>> v(N);

vector<int> COST(N, 0);
string str;
void dfs(int node)
{
    cout << node << " " << COST[node] << endl;
    if (v[node].first == 0 && v[node].second == 0) {
        return;
    }

    if (v[node].first != 0) {

        COST[v[node].first] = COST[node]; // taking the parents cost
        // movin to left child
        COST[v[node].first] += (str[node] != 'L');

        dfs(v[node].first);
    }

    if (v[node].second != 0) {

        COST[v[node].second] = COST[node];
        // moving to right child
        COST[v[node].second] += (str[node] != 'R');

        dfs(v[node].second);
    }
}
void solve()
{

    int n;
    cin >> n;

    cin >> str;
    str.insert(str.begin(), '0');

    v.clear();
    COST.clear();

    vector<int> leafs;

    for (int i = 1; i <= n; i++) {
        cin >> v[i].first >> v[i].second;

        if (v[i].first == 0 && v[i].second == 0) {
            leafs.push_back(i);
        }
    }

    dfs(1);

    int ans = INT_MAX;
    for (int i = 0; i < leafs.size(); i++) {
        ans = min(ans, COST[leafs[i]]);
    }
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}