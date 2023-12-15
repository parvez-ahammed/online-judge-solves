#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void getAns(ll val)
{

    int root = sqrtl(val);

    while (1ll * root * root < val)
        ++root;
    while (1ll * root * root > val)
        --root;

    int ans = 0;

    for (int i = 2; i * i <= root; i++) {
        if (root % i == 0) {
            ans = max(ans, i);
            while (root % i == 0) {
                root /= i;
            }
        }
    }
    if (root > 1) {
        ans = max(ans, (int)root);
    }

    cout << ans << endl;
}
void solve()
{

    ll n;
    cin >> n;

    getAns(n);
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