#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n, k;

    cin >> n >> k;

    map<int, pair<int, int>> mp;

    int u;
    for (int i = 1; i <= n; i++) {

        cin >> u;

        if (mp.count(u) == 0)
            mp[u].first = i;

        mp[u].second = i;
    }

    int a, b;
    while (k--) {
        cin >> a >> b;

        if (mp.count(a) == 0 or mp.count(b) == 0) {
            cout << "NO" << endl;
            continue;
        }

        (mp[a].first < mp[b].second) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}