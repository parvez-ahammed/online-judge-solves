#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<int> x(n), y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        ans += (ll)x[i] * y[n - i - 1];
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)

    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}