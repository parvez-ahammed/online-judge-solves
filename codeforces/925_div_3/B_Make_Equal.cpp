#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    vector<int> a(n);

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    ll minWater = sum / n;

    ll inHand = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] > minWater) {

            ll extra = a[i] - minWater;
            inHand += extra;
        }
        if (a[i] < minWater) {
            ll extra = minWater - a[i];
            inHand -= extra;
        }

        if (inHand < 0) {
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