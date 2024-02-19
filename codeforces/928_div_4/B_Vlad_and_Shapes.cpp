#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool flag = false;

    for (int i = 0; i < n - 1; i++) {
        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < n; j++) {
            cnt1 += (v[i][j] == '1');
            cnt2 += (v[i + 1][j] == '1');
        }
        if (cnt1 == cnt2 and cnt1 != 0 and cnt2 != 0) {
            cout << "SQUARE" << endl;
            return;
        }
    }

    cout << "TRIANGLE" << endl;
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