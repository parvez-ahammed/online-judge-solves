#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    string s, t;
    cin >> s >> t;

    int aCount = count(t.begin(), t.end(), 'a');

    if (aCount > 0)
    {
        if (t == "a")
            cout << 1 << endl;
        else
            cout << -1 << endl;

        return;
    }

    ll ans = (1ll * 1) << s.size();
    cout << ans << endl;
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