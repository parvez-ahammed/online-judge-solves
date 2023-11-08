#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define CheckBit(x, k) ((x >> k) & 1)

void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int limit = pow(2, n);

    for (int i = 0; i < limit; i++) {
        int mask = i;
        int clockPointer = 0;

        // 1 mane right
        // 0 mane left

        for (int j = 0; j < n; j++) {

            if (CheckBit(mask, j)) {
                clockPointer += v[j];

                if (clockPointer >= 360) {
                    clockPointer -= 360;
                }
            } else {
                clockPointer -= v[j];

                if (clockPointer < 0) {
                    clockPointer += 360;
                }
            }
        }

        if (clockPointer == 0) {
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