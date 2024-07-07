#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool changeFunction(vector<vector<int>>& change, int i, int j, int match, int add1, int add2, int x, int y)
{
    int n = change.size(), m = change[0].size();
    int dx = i + x, dy = j + y;

    while (dx < n && dy < m && dx >= 0 && dy >= 0) {
        if (change[dx][dy] == match) {

            change[i][j] += add1;
            change[i][j] %= 3;

            change[dx][dy] += add1;
            change[dx][dy] %= 3;

            change[dx][j] += add2;
            change[dx][j] %= 3;

            change[i][dy] += add2;
            change[i][dy] %= 3;
            return true;
        }
        dx += x;
        dy += y;
    }

    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<vector<int>> change(n, vector<int>(m, 0));

    map<pair<int, int>, int> xy1, xy2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            change[i][j] = a[i][j] - b[i][j];
            change[i][j] += 3;
            change[i][j] %= 3;

            if (change[i][j] == 1) {
                xy1[{ i, j }] += 1;
            } else if (change[i][j] == 2) {
                xy2[{ i, j }] += 1;
            }
        }
    }

    vector<pair<int, int>> xy = { { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 } };

    for (auto x : xy1) {
        // calculate all the diagonals
        int dx = x.first.first;
        int dy = x.first.second;

        // check the four side diagonals of dx dy

        vector<pair<int, int>> validDiags;

        for (int k = 0; k < 4; k++) {
            int nx = dx + xy[k].first;
            int ny = dy + xy[k].second;

            while (nx < n && ny < m && nx >= 0 && ny >= 0) {
                if (change[nx][ny] == 1) {
                    validDiags.push_back({ nx, ny });
                }
                nx += xy[k].first;
                ny += xy[k].second;
            }
        }

        vector<pair<int, pair<int, int>>> cost;

        for (int i = 0; i < validDiags.size(); i++) {
            int x1 = dx;
            int y1 = dy;

            int x2 = validDiags[i].first;
            int y2 = validDiags[i].second;

            int x3 = dx;
            int y3 = validDiags[i].second;

            int x4 = validDiags[i].first;
            int y4 = dy;
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt += change[i][j];
        }
    }

    if (cnt == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
