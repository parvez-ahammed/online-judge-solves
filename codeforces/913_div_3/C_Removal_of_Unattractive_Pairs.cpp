#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    string s;
    cin >> n;

    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    int mx = 0;

    for (auto [ch, occ] : mp) {
        mx = max(mx, occ);
    }

    bool beshiBoro = (mx * 2 > n);

    if (beshiBoro) {
        cout << 2 * mx - n << endl;
        return;
    }

    cout << n % 2 << endl;
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