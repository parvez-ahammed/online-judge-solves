#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;
int powerTwo[N];

void init()
{
    powerTwo[0] = 1;
    for (int i = 1; i < N; i++) {
        powerTwo[i] = (powerTwo[i - 1] * 2) % MOD;
    }
}
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;

    if (n == 1) {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        int contrib = (1ll * v[i] * (2 * i - n + 1)) % MOD + MOD;
        ans = (0LL + ans + contrib) % MOD;
    }

    cout << (1ll * ans * powerTwo[n - 2]) % MOD << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}