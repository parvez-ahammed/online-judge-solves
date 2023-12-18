#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int a, b;
    cin >> a >> b;


    // a mod x == b
    // how many x are there?

    //  a == b ?
    // then there are infinite x

    // a < b ?
    // then there are 0 x

    if (a == b) {
        cout << "infinity" << endl;
        return;
    }

    if (a < b) {
        cout << 0 << endl;
        return;
    }
    // base % x == b
    // (base - b )% x == 0
    // which means divisor of (base - b) are the x
    // have to find divisor count of (a - b)

    int ans = 0;

    int diff = a - b;

    for (int i = 1; i * i <= diff; i++) {
        if (diff % i == 0) {
            if (i > b)
                ans++;
            if (diff / i > b && i != diff / i)
                ans++;
        }
    }

    cout << ans << endl;

   

}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}