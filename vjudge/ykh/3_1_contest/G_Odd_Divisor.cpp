#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)
void solve()
{

    ll n;
    cin >> n;

    (n &(n - 1)) ? cout << "YES" << endl : cout << "NO" << endl;
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