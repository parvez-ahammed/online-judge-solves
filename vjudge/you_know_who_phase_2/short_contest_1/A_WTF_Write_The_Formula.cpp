#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int lcm = 2;
    for (int i = 3; i <= 10; i++) {
        lcm = (lcm * i) / __gcd(lcm, i);
    }

    ll n;
    cin >> n;
    cout << n / lcm << endl;
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