#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;

    vector<vector<int>> a(2, vector<int>(n));

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int ans = INT_MAX;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        sum1 += a[0][i];
    }

    for (int i = 0; i < n; i++) {
        sum1 -= a[0][i];
        ans = min(ans, max(sum1, sum2));
        sum2 += a[1][i];
    }

    cout << ans << endl;
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