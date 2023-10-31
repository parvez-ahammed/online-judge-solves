#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve() {

    int x , y;

    cin >> x >> y;


    double L = y * log(x);
    double R = x * log(y);

    if (L > R) {
        cout << ">" << endl;
    } else if (L < R) {
        cout << "<" << endl;
    } else {
        cout << "=" << endl;
    }
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