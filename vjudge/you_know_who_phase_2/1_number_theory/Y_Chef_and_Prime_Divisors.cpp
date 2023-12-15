#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll a, b;
    cin >> a >> b;

    while (true) {
        ll g = __gcd(a, b);
        if (g == 1)
            break;
        b /= g;
    }

    cout << (b == 1 ? "Yes" : "No") << endl;
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