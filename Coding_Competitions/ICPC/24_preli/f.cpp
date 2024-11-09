#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    ll a, b, c;

    cin >> a >> b >> c;
    ll s = (a + b + c) / 2.0;
    ll area = (s * (s - a) * (s - b) * (s - c));
    ll gcd = __gcd(s * s, area);
    cout << area / gcd << " " << (s * s) / gcd << endl;
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