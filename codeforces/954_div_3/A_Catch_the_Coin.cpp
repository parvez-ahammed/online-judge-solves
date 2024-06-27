#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y;
    cin >> x >> y;

    int dis = abs(x);
    y -= dis;

    if (y >= (dis - 1) or y >= (-1 * dis) - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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