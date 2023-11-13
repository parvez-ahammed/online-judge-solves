#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int n;
bool ok(ll mid)
{
    ll cnt = 0;

    for (int i = 1; i <= n; i++) {
        cnt += min(n * 1ll, mid / i);
    }

    return cnt >= (1ll * n * n + 1) / 2;
}
ll binarySearch()
{
    ll l = 1, r = n * 1ll * n, ans = 0;

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

    cin >> n;

    cout << binarySearch() << endl;
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