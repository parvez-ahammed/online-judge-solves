#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;

vector<int> spf(1e6 + 5, INT_MAX);

vector<bool> isPrime(1e6 + 5, true);

void sieve()
{

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= 1e6; i++) {
        if (isPrime[i]) {
            spf[i] = min(spf[i], i);
            for (int j = i + i; j <= 1e6; j += i) {
                isPrime[j] = false;
                spf[j] = min(spf[j], i);
            }
        }
    }
}

void solve()
{

    ll n;
    cin >> n;

    vector<int> cnt(n + 1, 0);

    ll ans = 1;

    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 1) {
            int k = spf[x];
            cnt[k]++;
            x /= k;
        }
    }

    for (auto occ : cnt)
        ans = (1ll * ans * (occ + 1)) % MOD;
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}