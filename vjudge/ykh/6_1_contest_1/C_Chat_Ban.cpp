#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
ll k, x;

ll sumF(ll n)
{
    return (n * (n + 1)) / 2;
}

ll countEmote(ll mid)
{
    ll cnt = 0;

    if (mid >= k) {
        cnt += sumF(k);

        ll rem = mid - k;

        ll tempFullSum = sumF(k - 1);
        ll tempRemSum = sumF(k - 1 - rem);

        cnt += tempFullSum - tempRemSum;
    } else {
        cnt += sumF(mid);
    }

    return cnt;
}

bool ok(ll mid)
{
    return countEmote(mid) <= x and mid <= 2 * k - 1;
}
ll bs()
{
    ll l = 1, r = 3e9, ans = 0;

    while (l <= r) {

        ll mid = (l + r) / 2;

        if (ok(mid)) {

            ans = mid;
            l = mid + 1;

        } else {
            r = mid - 1;
        }
    }
    if (countEmote(ans) < x and ans + 1 <= 2 * k - 1)
        ans++;

    return ans;
}
void solve()
{

    cin >> k >> x;

    cout << bs() << endl;
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