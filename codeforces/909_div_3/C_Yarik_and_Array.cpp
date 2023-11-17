#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> parity(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        parity[i] = v[i] % 2;

        cout << parity[i] << " ";
    }

    ll ans = LONG_LONG_MIN;

    ll sum = v[0];
    ans = max(ans, sum);
    for (int i = 1; i < n; i++) {

        if (parity[i - 1] != parity[i] and sum > 0) {
            sum += v[i];
        } else {
            sum = v[i];
        }
        ans = max(ans, sum);
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