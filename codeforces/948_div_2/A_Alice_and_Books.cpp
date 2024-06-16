#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        mx = max(mx, a[i]);
    }
    int ans = 0;
    int last = a[n - 1];

    sort(a.begin(), a.end());
    ans += last;
    if (a[n - 1] == last && mp[last] == 1) {
        ans += a[n - 2];
    } else {

        ans += mx;
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