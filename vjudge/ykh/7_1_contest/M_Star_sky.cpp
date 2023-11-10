#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 102, MAXC = 12;

vector<vector<vector<int>>> pfSum(MAXC + 1, vector<vector<int>>(N, vector<int>(N, 0)));

vector<vector<int>> get2DPrefixSum(vector<vector<int>>& vv)
{

    for (int i = 1; i < vv.size(); ++i) {
        for (int j = 1; j < vv[0].size(); ++j) {
            vv[i][j] = (vv[i][j] + vv[i - 1][j] + vv[i][j - 1] - vv[i - 1][j - 1]);
        }
    }

    return vv;
}

int getStarCount(int p, int x1, int y1, int x2, int y2)
{
    return pfSum[p][x2][y2] - pfSum[p][x1 - 1][y2] - pfSum[p][x2][y1 - 1] + pfSum[p][x1 - 1][y1 - 1];
}

void solve()
{

    int n, q, c;

    cin >> n >> q >> c;

    int mod = c + 1;

    for (int i = 0; i < n; ++i) {
        int x, y, s;
        cin >> x >> y >> s;
        pfSum[s][x][y]++;
    }
    // The idea came from the thought that  there are so small amount of brightness values <= 10
    for (int i = 0; i <= c; ++i) {
        // calculate the 2d prefix sum to fast query the number of stars in a given range for a specific point 
        pfSum[i] = get2DPrefixSum(pfSum[i]);
    }

    while (q--) {
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int ans = 0;

        // for each brightness count the number of starts that are within the range
        for (int p = 0; p <= c; p++) {
            int brightness = (t + p) % mod;
            int starCount = getStarCount(p, x1, y1, x2, y2);
            ans += brightness * starCount;
        }

        cout << ans << endl;
    }
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