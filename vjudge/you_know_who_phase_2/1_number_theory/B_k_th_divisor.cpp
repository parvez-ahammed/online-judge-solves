#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll kthDivisor(ll n, int k)
{

    vector<ll> v;
    for (int i = 1; (1ll * i * i) <= n; i++) {

        if (n % i == 0) {
            v.push_back(i);
            if (i != (n / i))
                v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    if (v.size() < k)
        return -1;

    return v[k - 1];
}
void solve()
{

    ll n, k;
    cin >> n >> k;
    cout << kthDivisor(n, k) << endl;
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