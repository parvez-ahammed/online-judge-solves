#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1), b(n + 1);

    vector<ll> c(n);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i < n; i++) {
        cin >> c[i];
    }

    while (q--) {
        int p, x, y;
        ll z;
        cin >> p >> x >> y >> z; 
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