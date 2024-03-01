#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i + 1);
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;

        if (mp[l].front() < mp[r].front()) {
            cout << l << endl;
        } else {
            cout << r << endl;
        }
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}