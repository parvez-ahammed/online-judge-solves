#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i].insert(s[i].begin(), '0');
    }

    pair<int, int> topHashPos = { -1, -1 }, bottomHashPos = { -1, -1 };

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == '#') {
                topHashPos = { i, j };
                break;
            }
        }

        if (topHashPos.first != -1) {
            break;
        }
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == '#') {
                bottomHashPos = { i, j };
                break;
            }
        }

        if (bottomHashPos.first != -1) {
            break;
        }
    }

    pair<int, int> leftHashPos = { -1, -1 }, rightHashPos = { -1, -1 };

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[j][i] == '#') {
                leftHashPos = { j, i };
                break;
            }
        }

        if (leftHashPos.first != -1) {
            break;
        }
    }

    for (int i = m; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (s[j][i] == '#') {
                rightHashPos = { j, i };
                break;
            }
        }

        if (rightHashPos.first != -1) {
            break;
        }
    }

    cout << leftHashPos.first << " " << topHashPos.second << endl;
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