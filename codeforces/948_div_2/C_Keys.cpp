#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> mask(m);
    vector<bool> verdict(m);

    for (int i = 0; i < m; i++) {
        int cnt;
        cin >> cnt;
        for (int j = 0; j < cnt; j++) {
            int x;
            cin >> x;
            mask[i] |= (1 << (x - 1));
        }
        char ver;
        cin >> ver;
        verdict[i] = (ver == 'o');
    }
    int ans = 0;
    for (int comb = 0; comb < (1 << n); comb++) {
        bool ok = true;
        for (int i = 0; i < m; i++) {
            int matchwith = __builtin_popcount(comb & mask[i]);
            if ((matchwith >= k) != verdict[i]) {
                ok = false;
                break;
            }
        }
        ans += ok;
    }
    cout << ans << endl;
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