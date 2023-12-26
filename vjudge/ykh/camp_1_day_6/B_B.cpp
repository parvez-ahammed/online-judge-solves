#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int left = k;

    int sum = 0;

    if (a >= left) {
        sum += left;
        left = 0;
    } else {

        sum += a;
        left -= a;
    }

    if (b >= left) {
        left = 0;
    } else {
        left -= b;
    }

    if (c >= left) {
        sum -= left;
        left = 0;
    } else {
        sum -= c;
        left -= c;
    }

    cout << sum << endl;
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