#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

#define checkBit(x, k) ((x >> k) & 1LL)
#define toggleBit(x, k) (x ^ (1LL << k))
#define setBit(x, k) (x | (1LL << k))

bool check(ll x, ll y)
{
    return y > 0 and y < x and (x ^ y) < x and (x ^ y) > 0;
}
void solve()
{

    ll x, target;
    cin >> x >> target;

    ll y = 0;
    for (int k = 0; k <= 62; k++) {

        if (checkBit(x, k) != checkBit(target, k)) {
            y = setBit(y, k);
        }
    }

    if (check(x, y)) {
        cout << 1 << "\n"
             << x << " " << (x ^ y) << endl;
    } else {
        cout << -1 << endl;
        return;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // take file input output

   
         freopen("input.txt", "r", stdin );
         freopen("output.txt", "w", stdout );
    


    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
