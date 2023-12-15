#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    map<int, int> mp;
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mp[a[i]] = max(mp[a[i]], b[i]);
    }

    int sum = 0;

    for (auto i : mp) {
        sum += i.second;
    }

    cout << sum << endl;
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