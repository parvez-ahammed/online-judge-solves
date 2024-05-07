#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    int mxDiff = 0;
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        sum += a;
        mxDiff = max(mxDiff, b - a);
    }
    cout << sum + mxDiff << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}