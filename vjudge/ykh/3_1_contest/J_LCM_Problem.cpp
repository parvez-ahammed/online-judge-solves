#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{
    ll l, r;
    cin >> l >> r;
    l * 2 <= r ? cout << l << " " << 2 * l << endl : cout << -1 << " " << -1 << endl;
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