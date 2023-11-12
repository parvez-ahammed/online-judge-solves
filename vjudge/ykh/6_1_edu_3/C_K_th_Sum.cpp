#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int N;
ll K;
vector<int> a, b;

bool ok(int mid)
{
    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ans += upper_bound(b.begin(), b.end(), mid - a[i]) - b.begin();
    }
    return ans >= K;
}

int binarySearch()
{
    int l = 0, r = 2e9, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (ok(mid))

        {
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
    a.resize(N);
    b.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

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