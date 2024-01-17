#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve()
{

    int a, b;

    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    int diff = abs(a - b);

   



    cout << getMinimum(a, b, 1) << endl;
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