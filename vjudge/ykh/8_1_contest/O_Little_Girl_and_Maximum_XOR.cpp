#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll l, r;
    cin >> l >> r;
    if (l == r) {
        cout << 0 << endl;
        return;
    }

    for (int i = 60; i >= 0; i--) {
        int lBit = (l >> i) & 1;
        int rBit = (r >> i) & 1;
        if (lBit != rBit) {
            cout << (1LL << (i + 1)) - 1 << endl;
            return;
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