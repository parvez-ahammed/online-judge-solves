#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

// 1 large and 3 small
// 2 large

// x large  and y small
// has N leaves
int x, y, n;

bool check(int large, int small)
{
    if (large * 2 + small <= x and small * 3 <= y) {
        return true;
    }
    return false;
}
void binSearch()
{
    int l = 0, r = 1e9;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid, n - mid)) {
            cout << "YES" << endl;
            return;
        } else if (mid * 2 + (n - mid) > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << "NO" << endl;
}

void solve()
{

    cin >> n >> x >> y;

    

    binSearch();
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