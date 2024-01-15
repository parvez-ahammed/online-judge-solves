#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
void solve()
{

    int n, f, a, b;
    //  n - number of message
    //  f - initial phone charge
    //  a - charge consumption per unit of time
    //  b - turned on and off charge
    cin >> n >> f >> a >> b;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool possible = true;
    int prevTime = 0;
    for (int i = 0; i < n; i++) {
        int currentTime = v[i];

        int timeDiff = currentTime - prevTime;

        int onChargeRequired = timeDiff * a;
        int onOffChargeRequired = b;

        int mn = min(onChargeRequired, onOffChargeRequired);

        // cout << "mn " << mn << endl;
        // cout << "f " << f << endl;
        if (f<= mn) {
            possible = false;
            break;
        }

        f -= mn;



        prevTime = currentTime;
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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