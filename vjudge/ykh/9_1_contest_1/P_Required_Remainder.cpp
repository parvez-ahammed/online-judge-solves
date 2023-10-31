#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int x, y, n;

    cin >> x >> y >> n;

    int inter = (n - y) / x;

    cout << 1ll* x * inter + y << endl;
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


// x * ( var ) + y <= n
// x * var  <= n - y
// x * var <= n - y