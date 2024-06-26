#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int x, y, k;
    cin >> x >> y >> k;

    

   

    while (x > y) {

        int val = y - (x % y);

        if (val > k) {
            cout << x + k << endl;
            return;
        }
        k -= val;
        x += val;
        while (x % y == 0)
            x /= y;
    }

    

    int res = (x < y ? 1 : 2);
    int val = (res == 1 ? y - x : y);
   
    if (val > k) {
        cout << x + k << endl;
        return;
    }

    
   

   if (y - res <= 0)
   {
         cout << x + k << endl;
         return;
   }

    x = res;

    x += k % (y - res);

    while (x % y == 0)
        x /= y;

    cout << x << endl;
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
