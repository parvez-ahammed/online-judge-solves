#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int n;
    cin >> n;
    vector<int> v(n);

    int mn = INT_MAX;
    int mx = INT_MIN;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        mp[v[i]]++;

        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    ll res = mp[mx] * 1LL * mp[mn];

    if (mx == mn)
    {
        res = (n * 1LL * (n - 1)) / 2;
    }

    cout << mx - mn << " " << res << endl;
    return 0;
}