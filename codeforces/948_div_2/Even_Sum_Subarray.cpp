#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
       

        for (int j = i; j <= n; j++) {
             int subSum = 0;
       
            for (int k = i; k <= j; k++) {
                subSum += v[k];
            }
            if (subSum % 2 == 0) {
                ans = max(ans, j - i + 1);
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