#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll multiplUnderN(ll k, ll n)
{
    return n / k;
}

ll check(ll k, ll l, ll r)
{
    return multiplUnderN(k, r) - multiplUnderN(k, l - 1);
}

void solve()
{

    ll n, m, l, r;
    cin >> n >> m >> l >> r;

    ll g = __gcd(n, m);
    // n*m/ g > r
    // n/g > r/g
    bool lcmGreaterThanR = ((n / g) > r / m);

    if (lcmGreaterThanR) {
        cout << 0 << endl;
        return;
    }
    // n * m / g may still overflow
    //  g is gcd so reducing n at first and then multiplyign m
    // so result is inside range
    ll lc = (n / g) * m;

    cout << check(lc, l, r);
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