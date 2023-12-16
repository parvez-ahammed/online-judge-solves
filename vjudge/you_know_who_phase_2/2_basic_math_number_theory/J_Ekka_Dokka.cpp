#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"

void solve()
{

    ll w;
    cin >> w;
    if (w & 1) {
        cout << "Impossible" << endl;
        return;
    }
    ll m = 1;

    while (w % 2 == 0) {
        m *= 2;
        w /= 2;
    }

    cout << w << " " << m << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    int i = 1;
    cin >> tc;
    while (tc--) {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}