#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    int ans = 1;

    for (auto it : mp) {
        ans = (1ll * ans * (it.second + 1)) % MOD;
    }

    cout << ans - 1 << endl;
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