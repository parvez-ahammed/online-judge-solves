#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int getDivisors(ll n)
{

    int cnt = 0;

    for (ll i = 1; (i * i) <= n; i++) {

        if (n % i == 0) {
            cnt += 2;
            if (i == (n / i))
                cnt--;
        }
    }

    return cnt;
}
void solve()
{

    int n;
    cin >> n;
    ll a[n];
    ll g = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }

    cout << getDivisors(g) << endl;
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