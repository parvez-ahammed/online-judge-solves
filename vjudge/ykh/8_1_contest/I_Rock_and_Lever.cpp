#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int msb(int n)
{

    int msb = 0;
    for (msb = 29; msb >= 0; msb--) {
        if (n & (1 << msb))
            return msb;
    }

    return msb;
}

int msbLog(int n)
{
    return log2(n);
}
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[msbLog(a[i])]++;
    }

    for (int i = 0; i < n; i++) {
        int bit = msb(a[i]);
        mp[bit]--;
        ans += mp[bit];
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