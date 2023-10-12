#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int N;

    cin >> N;

    vector<vector<char>> og(N + 1, vector<char>(N + 1));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> og[i][j];
        }
    }

    int cnt = 0;

    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N - i - 1; j++) {

            int x1 = N - 1 - j;
            int y1 = i;

            int x2 = N - 1 - i;
            int y2 = N - 1 - j;

            int x3 = j;
            int y3 = N - 1 - i;

            if (og[i][j] != og[x1][y1] or og[i][j] != og[x2][y2] or og[i][j] != og[x3][y3]) {
                int w = og[i][j] - 'a' + 1;
                int x = og[x1][y1] - 'a' + 1;
                int y = og[x2][y2] - 'a' + 1;
                int z = og[x3][y3] - 'a' + 1;

                int mx = max({ w, x, y, z });

                cnt += (mx - w);
                cnt += (mx - x);
                cnt += (mx - y);
                cnt += (mx - z);

                og[x1][y1] = og[i][j];
                og[x2][y2] = og[i][j];
                og[x3][y3] = og[i][j];
            }
        }
    }

    cout << cnt << endl;
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