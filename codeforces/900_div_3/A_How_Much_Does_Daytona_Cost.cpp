#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    bool possible = false;

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == k)

            possible = true;
    }

    if (possible) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}