#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n <= 2) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
            cout << 3 << " ";
        } else if (v[i] == 3) {
            cout << 1 << " ";
        } else if (v[i] == 2) {
            cout << 2 << " ";
        } else
            cout << v[i] << " ";
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