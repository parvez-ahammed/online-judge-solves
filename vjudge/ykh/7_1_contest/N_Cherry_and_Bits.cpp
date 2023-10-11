#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printVector(vector<vector<int>>& v)
{

    for (int i = 1; i < v.size() - 1; i++) {
        for (int j = 1; j < v[0].size() - 1; j++)
            cout << v[i][j];
        cout << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n + 2, vector<int>(m + 2, 0)), diff = v, prefix2D = v;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        for (int j = 1; j <= m; j++) {
            if (s[j - 1] == '1')
                v[i][j] = 1;
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        diff[x1][y1]++;
        diff[x1][y2 + 1]--;
        diff[x2 + 1][y1]--;
        diff[x2 + 1][y2 + 1]++;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix2D[i][j] = diff[i][j] + prefix2D[i - 1][j] + prefix2D[i][j - 1] - prefix2D[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (prefix2D[i][j] % 2 == 1) {
                v[i][j] = 1 - v[i][j];
            }
        }
    }

    printVector(v);

    return 0;
}