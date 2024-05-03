#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<ll> x(n + 1), a(n + 1);

    ll mx = 0;
    for (int i = 2; i <= n; i++) {
        cin >> x[i];
        mx = max(mx, x[i]);
    }

    int seed = 0;

    for (int i = 2; i <= 600; i++) {
        int candidateSeed = i;
        int nextNumber = x[2] + candidateSeed;
        if (nextNumber % candidateSeed == x[2]) {
            seed = candidateSeed;
            break;
        }
    }

    for (int i = 1; i <= 500; i++) {
        if (seed * i > mx) {
            seed *= i;
            break;
        }
    }

    a[1] = seed;
    for (int i = 2; i <= n; i++) {
        a[i] = x[i] + a[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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