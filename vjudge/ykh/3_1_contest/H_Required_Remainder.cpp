#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    int curr_rem = n % x;
    if (curr_rem == y)
        cout << n << endl;
    else if (curr_rem < y)
        cout << (n - curr_rem) - (x - y) << endl;

    else
    {
        cout << n - (curr_rem - y) << endl;
    }
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