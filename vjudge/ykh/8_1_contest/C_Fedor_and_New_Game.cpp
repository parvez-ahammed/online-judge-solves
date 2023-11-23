#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define CheckBit(x, k) ((x >> k) & 1)

void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int fred = 0;
    cin >> fred;

    int friends = 0;
    for (int i = 0; i < m; i++) {
        int cnt = 0;

        int diffCnt = __builtin_popcount(a[i] ^ fred);



        // for (int j = 0; j < 21; j++) {
        //     if (CheckBit(a[i], j) != CheckBit(fred, j)) {
        //         cnt++;
        //     }
        // }

        friends += (diffCnt <= k);
    }

   

    cout << friends << endl;
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
