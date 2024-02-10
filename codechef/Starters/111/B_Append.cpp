#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int q;
    cin >> q;

    vector<int> v;

    while (q--) {
        int ch, x;
        cin >> ch >> x;

        if (ch == 1) {
            v.insert(v.begin(), x);
        } else {
            --x;
            cout << v[x] << endl;
        }
    }

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}