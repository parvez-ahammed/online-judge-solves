#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int x, y;
    cin >> x >> y;
    int ans = 0;
    if (x == y)
        ans = x;

    if (x > y)
        ans = x + y;
    if (x < y)
    {
        int kotobarJay = (y / x);
        int kotoBaki = y % x;
        ans = (kotobarJay * x) + (kotoBaki >>1);
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