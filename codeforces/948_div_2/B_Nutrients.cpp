#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m;
    cin >> n >> m;

    vector<int> a(m), sum(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;

            sum[j] += x;
        }
    }

    bool ok = true;

    for (int i = 0; i < m; i++) {

        if (sum[i] < a[i]) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
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