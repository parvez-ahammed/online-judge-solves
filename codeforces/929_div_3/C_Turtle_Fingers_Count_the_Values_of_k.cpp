#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    ll a, b, l;

    cin >> a >> b >> l;

    set<int> ans;
    for (int x = 0; x <= 30; x++) {
        for (int y = 0; y <= 30; y++) {
            ll val = pow(a, x);
            if (val > l) {
                break;
            }
            val *= pow(b, y);

            if (val > l) {
                break;
            }
            if (l % val == 0) {
                ans.insert(l / val);
            }
        }
    }
    cout << ans.size() << endl;
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