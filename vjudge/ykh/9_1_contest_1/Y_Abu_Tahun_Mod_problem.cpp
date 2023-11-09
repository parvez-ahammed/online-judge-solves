#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int gcd = 0;

    for (int i = 0; i < n / 2; i++) {
        gcd = __gcd(gcd, abs(v[i] - v[n - i - 1]));
    }

    if (gcd == 0)
        gcd = -1;

    cout << gcd << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}