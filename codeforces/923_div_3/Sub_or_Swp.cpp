#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y;

    cin >> x >> y;

    int temp = 0;

    while (x) {
        temp = y;
        y = x;
        x = temp % x;
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