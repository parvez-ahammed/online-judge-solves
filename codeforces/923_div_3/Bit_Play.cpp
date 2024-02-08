#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9 + 7;
void solve()
{

    int n;
    cin >> n;

    string a;
    cin >> a;

    int ans = 1;

    for (int i = 2; i < n; i += 2) {
        
        int sn_1 = a[i - 1] - '0';
        int sn_2 = a[i - 2] - '0';
        int sn = a[i] - '0';

        int cnt = 0;

        cnt += ((sn_1 ^ sn_2) == sn);

        cnt += ((sn_1 & sn_2) == sn);

        cnt += ((sn_1 | sn_2) == sn);

        ans = (1ll * ans * cnt) % mod;
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