#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x;
    cin >> x;

    int mx = -1;
    int y = -1;

    for (int i = 1; i < x; i++) {

        int res = __gcd(x, i) + i;
        if (res > mx) {
            mx = res;
            y = i;
        }
    }

    cout << y << endl;
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