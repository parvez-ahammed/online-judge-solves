#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, c, d;
    cin >> n >> c >> d;

    vector<int> b(n * n);
    map<int, int> mp;
    for (int i = 0; i < n * n; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }

    sort(b.begin(), b.end());

    vector<vector<int>> a(n, vector<int>(n, 0));

    a[0][0] = b[0];

    for (int i = 0; i < 1; i++) {
        for (int j = 1; j < n; j++) {
            a[i][j] = a[i][j - 1] + d;
            mp[a[i][j]]--;

            if (mp[a[i][j]] < 0) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i - 1][j] + c;
            mp[a[i][j]]--;

            if (mp[a[i][j]] < 0) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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