#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() { 

    int a , b , c;
    cin >> a >> b >> c;

    int ans ;

    if ( a== b )
        ans = c;
    if (a == c)
        ans = b;
    if (b == c)
        ans = a;

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