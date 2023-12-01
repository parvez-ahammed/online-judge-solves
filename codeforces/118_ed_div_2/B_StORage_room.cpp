#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define checkBit(n, pos) (n & (1 << pos))
#define setBit(n, pos) (n | (1 << pos))
void solve()
{

    int n;

    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    bool possible = true;

    vector<vector<int>> bitCount(n, vector<int>(31, 0));

    for (int k = 0; k < 31; k++) {

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                if (i != j) {

                    if (checkBit(v[i][j], k)) {
                        bitCount[i][k]++;
                    }
                }
            }
        }
    }

    vector<int> ans(n, 0);

    for (int k = 0; k < 31; k++) {

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                if (i != j) {

                    if (checkBit(v[i][j], k) and checkBit(v[j][i], k)) {
                        if (bitCount[i][k] == n - 1) {
                            ans[i] = setBit(ans[i], k);
                        } else if (bitCount[j][k] == n - 1) {
                            ans[j] = setBit(ans[j], k);
                        } else {
                            possible = false;
                        }
                    }
                }
            }
        }
    }

    if (!possible) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
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