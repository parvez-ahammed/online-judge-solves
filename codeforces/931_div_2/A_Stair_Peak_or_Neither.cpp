#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int a, b, c;

    cin >> a >> b >> c;

    if (a < b and b < c)
        cout << "STAIR" << endl;
    else if (a < b and b > c)
        cout << "PEAK" << endl;
    else
        cout << "NONE" << endl;
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