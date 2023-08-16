#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int l, r, x, y;
    cin >> l >> r;
    (l * 2 <= r ? (x = l, y = 2 * l) : (x = -1, y = -1));

    cout << x << " " << y << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}