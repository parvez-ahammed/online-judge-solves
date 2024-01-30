#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void calc(ll& a, ll& b, ll& x, ll& i, ll& r)
{

    if (((1LL << i) | x) <= r) {
        ll tempA = a;
        tempA ^= (1LL << i);
        ll tempB = b;
        tempB ^= (1LL << i);

        if ((abs(tempA - tempB) < abs(a - b))) {
            x |= (1LL << i);
            a ^= (1LL << i);
            b ^= (1LL << i);
        }
    }
}

void solve()
{

    ll a, b, r;
    cin >> a >> b >> r;

    ll x = 0;

    ll mn = LLONG_MAX;

    ll origA = a;
    ll origB = b;
    ll origX = x;

    for (ll i = 60; i >= 0; i--) {


        calc(a, b, x, i, r);

        mn = min(mn, abs(a - b));
    }

    a = origA;
    b = origB;
    x = origX;

    for (ll i = 0; i <= 60; i++) {

        calc(a, b, x, i, r);

        mn = min(mn, abs(a - b));
    }

    cout << mn << endl;
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