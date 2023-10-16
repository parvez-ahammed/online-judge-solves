#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N, K;
vector<int> v;

bool ok(ll mid)
{

    int subCnt = 1;

    ll sum = 0;

    for (int i = 1; i <= N; i++) {

        if (v[i] > mid) {
            return false;
        }

        sum += v[i];

        if (sum > mid) {
            subCnt++;
            sum = v[i];
        }
    }

    return (subCnt <= K);
}

ll bs()
{
    ll l = 1, r = 1e18, ans = 0;

    

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid -1;
        } else {
            l = mid+1;
        }
    }

    return ans;
}

void solve()
{
    cin >> N >> K;

    v.resize(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> v[i];
    }

    cout << bs() << endl;
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