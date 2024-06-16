#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
bool ok(int b, int k, int a)
{
    return (b - k + 1) >= a;
}
int binarySearch(int n, int a, int b)
{

    int l = 0, r = min(n, b), ans = 0;

    while (l <= r) {
        int k = (l + r) / 2;

        if (ok(b, k, a)) {
            ans = k;
            l = k + 1;
        } else {
            r = k - 1;
        }
    }
    return ans;
}

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    int mn = min(n, b);
    ll res = 0;
    int k = binarySearch(n, a, b);

    res = (1ll * k * (b + 1 - a)) - ((1ll * k * (k + 1)) / 2) + (1ll * n * a);

    cout << res << endl;
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