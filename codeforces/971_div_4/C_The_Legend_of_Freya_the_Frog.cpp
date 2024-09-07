#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y, k;

    cin >> x >> y >> k;

    int xMove = (x % k == 0) ? x / k : x / k + 1;
    int yMove = (y % k == 0) ? y / k : y / k + 1;

    cout << max(2 * xMove - 1, 2 * yMove) << endl;
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