#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;

#define checkBit(n, b) (((n) >> (b)) & 1)
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n), cnt(30);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int nMinusOneFact = 1;

    for (int i = 1; i < n; i++) {
        nMinusOneFact = (1ll * nMinusOneFact * i) % MOD;
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 20; j++) {

            if (checkBit(a[i], j))
                cnt[j]++;
        }
    }

    ll res = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 20; j++) {

            ll contrib = (1LL * nMinusOneFact * (1 << j)) % MOD;

            if (checkBit(b[i], j)) {
                res += (n - cnt[j]) * contrib % MOD;
            } else {
                res += cnt[j] * contrib % MOD;
            }
        }
    }
    cout << res % MOD << "\n";
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