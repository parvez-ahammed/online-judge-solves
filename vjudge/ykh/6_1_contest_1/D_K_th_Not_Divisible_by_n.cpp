#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int n, k;

bool ok(ll mid)
{
    return mid - (mid / n) >= k;
}

void solve()
{

    cin >> n >> k;

    long long l = 1, r = 1e18, ans = 0;

    while (l <= r) {

        long long mid = (l + r) / 2;
        ok(mid) ? r = mid - 1, ans = mid : l = mid + 1;
    }

    cout << ans << endl;
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