#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int sum = a + b + c;
    int divVal = n / sum;

    n %= sum;

    int extra = 0;

    if (n > 0) {
        if (n <= a) {
            extra += 1;
        } else if (n <= a + b) {
            extra += 2;
        } else {
            extra += 3;
        }
    }

    cout << (divVal * 3) + extra << endl;
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