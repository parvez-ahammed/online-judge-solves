#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define CheckBit(n, pos) (n & (1 << pos))
void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> cnt(32, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];

         for (int j = 0; j < 31; j++) {
            if (CheckBit(v[i], j)) {
                cnt[j]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {

        bool possible = true;

        for (int j = 0; j < 31; j++) {
            if (cnt[j] % i != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << i << ' ';
        }
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