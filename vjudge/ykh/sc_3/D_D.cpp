#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int MOD = 1e9 + 7;

ll f(int n)
{

    

    ll ans = 1;

    while (n > 0) {
        int val = n % 10;
        ans *= val;
        ans %= MOD;
        n /= 10;
    }

    return ans ;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    ll ans = 1;

    if (r - l>= 13) {
        cout << 0 << endl;
        return;
    }

    for (int i = l; i <= r; i++) {
        ans *= f(i);
        ans %= MOD;
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}