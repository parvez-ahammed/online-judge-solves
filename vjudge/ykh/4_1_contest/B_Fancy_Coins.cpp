#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    ll kFancyLagbe = m / k;

    ll fillupHoise = kFancyLagbe * k;

    ll aroLagbe = m - fillupHoise;

    kFancyLagbe -= min(ak, kFancyLagbe);

    ll ekErCoinLagbe = kFancyLagbe *k;

    cout << arobaki + aroLagbe <<endl;

    cout << kFancyLagbe + aroLagbe << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}