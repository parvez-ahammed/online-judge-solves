#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int r , g , b;
    cin >> r >> g >> b;
    string c;
    cin >> c;

    int ans = 0;

    if (c == "Red") ans = min (g , b);
    if (c == "Green") ans = min (r , b);
    if (c == "Blue") ans = min (r , g);

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
   // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}