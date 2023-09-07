#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll w, h, n;
bool ok(ll mid)
{
    ll a = (mid / w);
    ll b = (mid / h);

    if (b == 0)
        return false;
    return a >= (double)n / b;
}
ll binSearch()
{

    ll l = 1, r = 1e18;

    ll ans = 0;

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
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w >> h >> n;

    cout << binSearch() << endl;

    return 0;
}