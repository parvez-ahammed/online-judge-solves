#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void printResult(bool alice)
{
    alice ? cout << "Alice" << endl : cout << "Bob" << endl;
}
void solve()
{

    int h, w, xa, xb, ya, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;

    if (xb == 1 or xa == h) {
        cout << "Draw" << endl;
        return;
    }

    if (w == 1) {
        if (ya > yb) {
            cout << "Draw" << endl;
        }

        //cout << abs(xa - xb -1) << endl;
        printResult(abs(xa - xb -1) % 2 == 0);
        return;
    }

    // h * w board size
    // xa, ya - starting point for alice
    // xb, yb - starting point for bob
    // alice can move only down
    // bob can move only up
    int aliceWin = (h - xa);
    int bobWin = (xb - 1);

    if (abs(ya - yb) >= 2) {
        cout << "Draw" << endl;
    } else if (abs(ya - yb) <= 1) {
        printResult(true);
    } else {
        cout << "Draw" << endl;
    }
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