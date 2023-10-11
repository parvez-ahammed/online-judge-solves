#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int l1, r1, l2, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    if (l1 != r2)
        cout << l1 << " " << r2 << endl;
    else
        cout << l1 << " " << r2 - 1 << endl;
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