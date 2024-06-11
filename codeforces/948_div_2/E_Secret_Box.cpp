#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    ll x, y, z;
    ll k;
    cin >> x >> y >> z >> k;
    ll ans = 0;

    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= y; b++) {
            ll temp = k;
            temp /= a;
            temp /= b;
            ll c = temp;

            ll mul = a * b * c;

            if (mul == k) {

                if (c <= z) {

                    ll singleAxis = (x - a) + (y - b) + (z - c);
                    ll doubeAxis = (x - a) * (y - b) + (y - b) * (z - c) + (x - a) * (z - c);
                    ll tripleAxisMove = (x - a) * (y - b) * (z - c);
                    ll cnt = doubeAxis + tripleAxisMove + singleAxis + 1;
                    ans = max(ans, cnt);
                }
            }
        }
    }

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