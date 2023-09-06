#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;
    int mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mx, v[i]);
    }

    if (mp.count(mx - 1) == 0 and mp[mx] == 1 and mx != 1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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