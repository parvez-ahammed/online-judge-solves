#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    int x1 , x2 , x3;
    cin >> x1 >> x2 >> x3;

    int mn = INT_MAX;

    for (int  i = - 20;  i <= 20 ; i++)
    {
        mn = min(mn , abs(x1 - i) + abs(x2 - i) + abs(x3 - i));
    }

    cout << mn << endl;
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