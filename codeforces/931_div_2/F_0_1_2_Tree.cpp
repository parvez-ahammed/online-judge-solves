#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int a, b, c;

void solve()
{

    cin >> a >> b >> c;

    if (c != a + 1) {
        cout << -1 << endl;
        return;
    }

    if (a == 0) {
        if (b == 0) {
            cout << 0 << endl;
        } else {
            cout << b << endl;
        }
        return;
    }

    int level = 0;

    int temp = a - pow( 2 , floor(log2(a)) -1) ;


    cout << floor(log2(a)) + (b /temp)  << endl;
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