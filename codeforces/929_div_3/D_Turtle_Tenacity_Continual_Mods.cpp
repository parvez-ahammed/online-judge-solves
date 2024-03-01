#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] != a[1]) {
        cout << "YES" << endl;
        return;
    }

    bool posible = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] % a[0] != 0) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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