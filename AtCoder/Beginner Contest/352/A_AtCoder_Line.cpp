#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, x, y, z;
    cin >> n >> x >> y >> z;

    if ((z >= x and z <= y) or (z >= y and z <= x)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
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