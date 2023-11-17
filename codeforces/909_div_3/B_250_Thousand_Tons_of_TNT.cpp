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

    vector<ll> prefixSum(n + 1);



    ll ans = LONG_LONG_MIN;
    for (int i = 1; i <= n; i++) {

        ll mx = LONG_LONG_MIN;
        ll mn = LONG_LONG_MAX;

        if (n % i == 0) {

            
            ll sum = 0;

            for (int j = 1; j <= n; j++) {

                sum += v[j];
                if (j % i == 0) {
                    mx = max(mx, sum);
                    mn = min(mn, sum);

                
                    sum = 0;
                }

                
            }
            ans = max(ans, mx - mn);
            
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