#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    ll ans = 0;

    map<ll, ll> mp;

    for (i = 0; i < m; i++) {
        ll cnt = 0;
        
        while (j < n && a[j] <= b[i]) {
            if (a[j] == b[i])
                cnt++;
            j++;
        }

        if (mp.count(b[i]) == 0)
            mp[b[i]] = cnt;

        ans += mp[b[i]];
    }

    cout << ans << endl;

    return 0;
}