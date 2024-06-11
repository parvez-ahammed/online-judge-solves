#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
bool ok(int h, int n, vector<int>& a, vector<int>& c, ll mid)
{

    ll damageDealt = 0;
    for (int i = 0; i < n; i++) {
        ll totalHitTime = ceil((mid * 1.0) / c[i]);

        if (totalHitTime < 1e6)
            damageDealt += 1ll * totalHitTime * a[i];
        else
            return true;

        if (damageDealt >= h) {
            return true;
        }
    }

    // cout << mid << " " << damageDealt << endl ;

    return damageDealt >= h;
}
ll binarySearch(int h, int n, vector<int>& a, vector<int>& c)
{
    ll ans = 0;
    ll l = 1, r = 1e18;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(h, n, a, c, mid)) {
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

    int h, n;
    cin >> h >> n;

    vector<int> a(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    cout << binarySearch(h, n, a, c) << endl;

    // cout << ok(h , n , a , c , 1) << endl ;
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