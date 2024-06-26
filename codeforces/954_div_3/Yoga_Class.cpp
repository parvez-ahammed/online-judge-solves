#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, x, y;
    cin >> n >> x >> y;

    if (x * 2 > y) {
        cout << n * x << endl;
    } else {
        cout << (n / 2) * y + (n % 2) * x << endl;
    }
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