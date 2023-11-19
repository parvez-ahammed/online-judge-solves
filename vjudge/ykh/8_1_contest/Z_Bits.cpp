#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll F(ll l, ll r)
{
    if (l == r)
        return l;
    int b = (int)log2(r);

    ll powerB= (1LL << b);
    if ( powerB<= l)
        return F(l - powerB, r - powerB) + powerB;

    if ((1LL << (b + 1)) - 1 <= r)
        return (1LL << (b + 1)) - 1;

    return powerB - 1;
}
void solve()
{

    ll l, r;
    cin >> l >> r;

    cout << F(l, r) << endl;
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