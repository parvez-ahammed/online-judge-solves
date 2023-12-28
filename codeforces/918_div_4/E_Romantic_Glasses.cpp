#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define F first
#define S second
const int MAXN = 2e5 + 5;
// lulia from odd
// date from even
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n + 5);

    vector<pair<ll, ll>> pref(n + 5);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    

    pref[1].F = v[1];
    pref[1].S = 0;
    pref[2].F = v[1];
    pref[2].S = v[2];

    for (int i = 3; i <= n; i++) {

        if (i % 2 == 1) {
            pref[i].F = pref[i - 2].F + v[i];
            pref[i].S = pref[i - 1].S;
        } else {
            pref[i].F = pref[i - 1].F;
            pref[i].S = pref[i - 2].S + v[i];
        }
    }

    set<ll> s;
    s.insert(0);

    for (int i = 1; i <= n; i++) {

        s.insert(pref[i].F - pref[i].S);
    }

    if (s.size() != n + 1) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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