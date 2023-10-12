#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, q;
    cin >> n >> q;

    vector<int> statues(n + 1, 0);

    // have to use offline query with difference array technique

    while (q--) {
        int l, r;
        cin >> l >> r;
    }

    for (int i = 1; i <= n; i++) {
        cout << statues[i] << " ";
    }
    cout << endl;
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