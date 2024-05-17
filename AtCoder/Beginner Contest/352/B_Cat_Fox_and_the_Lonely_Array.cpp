#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<vector<int>> prefixOr(25, vector<int>(n + 5, 0));

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int k = 0; k <= 20; k++) {
            prefixOr[k][i] = prefixOr[k][i - 1] + ((a[i] >> k) & 1);
        }
    }

    int ans = 1;
    // 20
    for (int k = 20; k >= 0; k--) {

        // 1 time in whole K
       for ( ; ans <= n; ans++ ) {

            int prev = -1;
            bool valid = true;

            // n
            for (int i = 0; i <= n - ans; i++) {
                int cnt = prefixOr[k][i + ans] - prefixOr[k][i];

                if (prev == -1) {
                    prev = (cnt > 0);
                } else {
                    if (prev != (cnt > 0)) {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid) {
                break;
            }

        }
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