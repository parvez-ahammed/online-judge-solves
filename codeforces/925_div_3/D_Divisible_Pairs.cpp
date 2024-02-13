#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;

    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {

    //         int p = a[i];
    //         int q = a[j];
    //         int forX = (p % x) + (q % x);
    //         int forY = (p % y) - (q % y);

    //         forX %= x;
    //         forY %= y;

    //         if (forX == 0 and forY == 0) {
    //             cnt++;

    //             cout << p << " " << q << endl;
    //         }

    //     }
    // }

    map<pair<int, int>, int> mp;

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        int qx = a[i] % x;
        int qy = a[i] % y;

        int reqX = (x - qx) % x;
        int reqY = qy;

        if (mp.find({ reqX, reqY }) != mp.end()) {

            ans += mp[{ reqX, reqY }];
        }

        mp[{ qx, qy }]++;
    }

    cout << ans << endl;
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