#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    x -= a;
    y -= b;

    if (x < 0)
        x = 0;
    if (y < 0)
        y = 0;

    if (x + y > c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}