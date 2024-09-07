#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    const int limit = 200005;

    int yStore[2][limit] = { 0 };

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        yStore[y][x]++;
    }
    vector<vector<int>> yStoreSuffix(2, vector<int>(limit + 5));
    ll count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = limit - 1; j >= 0; j--) {
            yStoreSuffix[i][j] = yStore[i][j] + yStoreSuffix[i][j + 1];
        }
    }

    for (int j = 0; j < limit; j++) {

        if (yStore[1][j] == 1 and yStore[0][j] == 1) {
            count += yStoreSuffix[1][j] + yStoreSuffix[0][j] - 2;
        }

        if (j + 2 < limit) {
            count += (yStore[0][j] == 1 and yStore[0][j + 2] == 1 and yStore[1][j + 1] == 1);
            count += (yStore[1][j] == 1 and yStore[1][j + 2] == 1 and yStore[0][j + 1] == 1);
            count += (yStore[0][j] == 1 and yStore[0][j + 1] == 1 and yStore[1][j + 1] == 1);
            count += (yStore[1][j] == 1 and yStore[1][j + 1] == 1 and yStore[0][j + 1] == 1);
        }
    }

    cout << count << endl;
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