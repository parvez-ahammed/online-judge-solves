#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll a, b, c;

    cin >> a >> b >> c;

    ll ans = a;

    int keptDiff = b % 3;
    b -= keptDiff;
    ans += b / 3;

    ll campNeed = (keptDiff + c) / 3;

    if (campNeed == 0 and keptDiff > 0) {
        cout << -1 << endl;
        return;
    }

    ans += campNeed;

    ans += (keptDiff + c) % 3 == 0 ? 0 : 1;

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