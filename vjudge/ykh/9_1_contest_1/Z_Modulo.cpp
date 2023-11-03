#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll x;
    cin >> x;

    sort(v.begin(), v.end());

    while (true) {

        ll newX = -1;

        bool unchanged = true;

        for (int i = 0; i < n; i++) {
            if (v[i] <= x and x % v[i] > newX) {
                unchanged = false;
                newX = x % v[i];
            }
        }

        if (unchanged)
            break;
        else
            x = newX;
    }

    cout << x << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}