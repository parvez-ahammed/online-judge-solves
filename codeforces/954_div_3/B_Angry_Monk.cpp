#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(k);

    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll res = 0;
    for (int i = 0; i < k - 1; i++) {
        res += (a[i]) * 2 - 1;
    }

    cout << res << endl;
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