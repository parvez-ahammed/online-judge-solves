#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    double sum = 0;

    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(6) << (4 * sum) / n << endl;
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