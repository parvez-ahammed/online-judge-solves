#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printVector(vector<vector<int>>& v)
{
    cout << "Printing 2D Vector" << endl;
    for (int i = 1; i < v.size(); i++) {
        for (int j = 1; j < v[0].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<string> v(n);

    vector<vector<int>> forest(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        for (int j = 1; j <= n; j++) {
            if (s[j - 1] == '*')
                forest[i][j] = 1;
        }
    }

    //printVector(forest);

    vector<vector<int>> prefix2D(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; ++j) {
            prefix2D[i][j] = forest[i][j] + prefix2D[i - 1][j] + prefix2D[i][j - 1] - prefix2D[i - 1][j - 1];
        }
    }

   

    //printVector(prefix2D);

    while(q--)
    {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        int ans = prefix2D[x2][y2] - prefix2D[x1 - 1][y2] - prefix2D[x2][y1 - 1] + prefix2D[x1 - 1][y1 - 1];

        cout << ans << endl;
    }

    return 0;
}