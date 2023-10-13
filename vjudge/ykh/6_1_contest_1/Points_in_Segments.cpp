#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, q;
    cin >> n >> q;

    vector<int> v(n + 1, INT_MIN);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    while (q--) {
        int a, b;

        cin >> a >> b;

        int l = lower_bound(v.begin(), v.end(), a) - v.begin();
        int r = upper_bound(v.begin(), v.end(), b) - v.begin();

        cout << r - l << endl;

        // cout << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": " << endl;
        solve();
    }
    return 0;
}