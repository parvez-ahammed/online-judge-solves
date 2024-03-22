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

    ll ans = 0;
    map<int, int> mp;
    int i = 0, j = 0;
    for (i = 0; i < m; i++) {
        int cnt = 0;
        while (j < n && a[j] <= b[i]) {
            if (a[j] == b[i])
                cnt++;
            j++;
        }
        mp[b[i]] += cnt;
        ans += mp[b[i]];
    }

    cout << ans << endl;

    return 0;
}