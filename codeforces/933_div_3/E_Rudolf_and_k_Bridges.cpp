#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define VV vector<vector<int>>


void solve()
{

    int n, m, k, d;

    cin >> n >> m >> k >> d;

    

    VV river(n, vector<int>(m));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            cin >> river[i][j];
        }
    }

    int ans = INT_MAX;
    cout << ans << endl;
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

// 0 1 2 3 2 1 2 3 3 2 0