#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        int val = a[i - 1];

        if (val < 0) {
            cout << "NO" << endl;
            return;
        }

        a[i - 1] -= val;
        a[i] -= (2 * val);
        a[i + 1] -= val;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            cout << "NO" << endl;
            return;
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