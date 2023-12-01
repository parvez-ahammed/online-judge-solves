#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<int> v(105, 0);

ll N, H;

bool ok(ll mid)
{
    ll damage = mid;
    for (int i = 1; i < N; i++) {
        damage += min(mid, (ll)v[i + 1] - v[i] );
    }

    return damage >= H;
}

ll binarySearch()
{

    ll l = 1, r = 1e18 + 2, ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}
void solve()
{

    cin >> N >> H;

    for (int i = 1; i <= N; i++) {
        cin >> v[i];
    }

    //cout << ok(3) << endl;

    cout << binarySearch() << endl;
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