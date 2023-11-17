#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<long long> v(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {

        mp[v[i]]--;

        cnt += mp[v[i]];

        if (v[i] == 1)
            cnt += mp[v[i] + 1];
        if (v[i] == 2)
            cnt += mp[v[i] - 1];
    }

    cout << cnt << endl;
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