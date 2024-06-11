#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 1e9 + 7;

int D(ll n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{

    // D(n) represents the sum of the digits of n.
    // how many integers n where 10^l <= n < 10^r satisfy
    // D(K.n) = K .D(n)
    int l, r, k;
    cin >> l >> r >> k;

    int cnt = 0;

    ll start = pow(10, l);
    ll end = pow(10, r);

    for (int n = start; n < end; n++) {

        ll dKn = D(k * n);
        ll kDn = D(n);

        if (dKn % k == 0) {
            if (dKn / k == kDn) {
                cout << n << " HIT \n";
                cnt++;
            }
        }
    }

    cout << cnt << endl;
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