#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<ll> a(n + 1), dpAbs(n + 1, 0), dpAdd(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        ll addVal = dpAdd[i - 1] + a[i];
        ll absVal = dpAbs[i - 1] + a[i];
        dpAdd[i] = addVal;
        dpAbs[i] = max(abs(addVal), absVal);
    }

    cout << dpAbs[n] << endl;

    return;
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