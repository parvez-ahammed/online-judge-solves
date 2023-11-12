#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N  , K;
vector<int> v;

bool ok(ll mid)
{
    ll sum = 0;
    ll cnt = 1;

    for (int i = 0; i < N; i++) {
        if (v[i] > mid) {
            return false;
        }

        if (sum + v[i] > mid) {
            cnt++;
            sum = v[i];
        } else {
            sum += v[i];
        }
    }

    return cnt <= K;
}

ll binarySearch()
{
    ll ans = 0;

    ll l = 0, r = 1e15;

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
    cin >> N >> K;
    v.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

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