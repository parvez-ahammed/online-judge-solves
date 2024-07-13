#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int distance (int x1 , int y1 , int x2 , int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
void solve() { 

    int xa , ya , xb , yb , xc , yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    int ab = distance (xa , ya , xb , yb);
    int bc = distance (xb , yb , xc , yc);
    int ac = distance (xa , ya , xc , yc);

   

    if (ab + bc == ac || ab + ac == bc || ac + bc == ab) {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
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