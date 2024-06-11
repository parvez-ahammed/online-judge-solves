#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;


    int ans = 0, val = 0;

    for (int x = n; x >= 2; x--) {
        int sum = 0;

        for (int k = 1; k * x <= n; k++) {
            sum += (k * x);
        }

        if (sum > ans) {
            ans = sum;
            val = x;
        }
    }
    cout << val << endl;
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