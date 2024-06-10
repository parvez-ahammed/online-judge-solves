#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    ll x;
    cin >> x;

    int inHand = 0;

    ll temp = x;

    while (temp) {
        int val = temp % 10;
        val -= inHand;
        inHand = 0;
        if (val > 8 or val < 0) {
            cout << "NO" << endl;
            return;
        }
        if (val == 0 and temp / 10 == 0) {
            break;
        }
        inHand = 1;

        temp /= 10;
    }

    cout << (inHand ? "NO" : "YES") << endl;
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