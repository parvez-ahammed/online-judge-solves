#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);

    map<int, int> mp;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[i - v[i]]++;
    }

    if (n - mp.size() >= 0)
        cout << n - mp.size() + 1 << endl;
    else
        cout << 1 << endl;
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