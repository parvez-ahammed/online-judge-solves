#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll n;
    ll k;
    cin >> n >> k;

    deque<ll> dq;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        dq.push_back(x);
    }

    while (k > 1 and dq.size() > 1) {
        ll first = dq.front();
        dq.pop_front();
        ll last = dq.back();
        dq.pop_back();

        ll mn = min(first, last);

        if (k >= mn * 2) {
            k -= mn * 2;
            first -= mn;
            last -= mn;

        } else {
            ll newMn = min(1ll * mn, k / 2);

            first -= newMn;
            last -= newMn;
            k = (k % 2);
        }

        if (first != 0) {
            dq.push_front(first);
        }
        if (last != 0) {
            dq.push_back(last);
        }
    }

    if (k > 0 and !dq.empty()) {
        ll first = dq.front();
        first -= k;

        if (first <= 0) {
            dq.pop_front();
        }
    }

    cout << n - dq.size() << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}