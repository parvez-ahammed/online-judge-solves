#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool isValid(int x, int y, int n, int m)
{
    return x >= 1 && x <= n && y >= 1 && y <= m;
}
void solve()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n + 1, vector<int>(m + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    int fx[] = { 1, -1, 0, 0 };
    int fy[] = { 0, 0, 1, -1 };

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

         
            int mx = 0;
            for (int k = 0; k < 4; k++) {
                int x = i + fx[k];
                int y = j + fy[k];

                if (isValid(x, y, n, m)) {
                    mx = max(mx, a[x][y]);
                }
            }

            a[i][j] = min (mx , a[i][j]);
        }
    }

  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
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

/*

74 74 31 31
74 74 17 7
31 17 17 3
31 7  3  3
7  7  1  1

*/