#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n > 1) {
        if (n > k) {
            n -= (k - 1);
            cnt++;
        }
        if (n <= k) {
            cnt++;

            break;
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