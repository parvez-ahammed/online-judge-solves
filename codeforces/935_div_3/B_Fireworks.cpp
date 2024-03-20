#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve()
{

    ll a, b, m;
    cin >> a >> b >> m;

    ll ans = (m / a) + (m / b) + 2;

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

// 3 6 9 12 15 18 21 24
// 4 8 12 16 20 24