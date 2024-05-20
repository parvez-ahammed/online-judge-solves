#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int x, y;
    cin >> x >> y;

    if (y == 0)
    {
        cout<< ceil(x / 15.0)<<endl;
        return;
    }

    int ans = 0;

    int blankLeft = 0;
    if (y % 2 == 0) {
        ans = y / 2;
        blankLeft = ans * 7;
        x -= blankLeft;
    } else {
        ans = y / 2 + 1;
        blankLeft = (y/2) * 7;
        x -= blankLeft;
        x -= 11;
    }

    if ( x > 0)
        ans += ceil(x / 15.0);

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