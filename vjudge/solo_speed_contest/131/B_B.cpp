#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, s;
    cin >> n >> s;

    vector<int> up(n + 1), down(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> up[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> down[i];
    }

    if (up[1] == 0) {
        cout << "NO" << endl;
        return;
    }

    if (up[s] == 1) {
        cout << "YES" << endl;
        return;
    }

    if (down[s] == 0) {
        cout << "NO" << endl;
        return;
    }


    for (int i =s+1; i <= n; i++) {
        if (up[i] == 1 && down[i] == 1) {
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
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}