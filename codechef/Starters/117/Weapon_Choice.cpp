#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll h, x, y1, y2, k;

    cin >> h >> x >> y1 >> y2 >> k;
    ll cntX = 0, cntY = 0;

    cntX = (h % x == 0) ? (h / x) : (h / x) + 1;

    ll y1Dam = y1 * k;
    cntY = k;

    if (y1Dam < h) {

        h -= y1Dam;

        cntY += (h % y2 == 0) ? (h / y2) : (h / y2) + 1;
    } else {
        cntY = (h % y1 == 0) ? (h / y1) : (h / y1) + 1;
    }

    cout << min(cntX, cntY) << endl;
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