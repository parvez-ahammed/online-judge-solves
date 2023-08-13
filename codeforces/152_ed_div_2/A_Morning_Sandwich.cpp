#include <bits/stdc++.h>
using namespace std;
/**----data type----*/


void solve()
{
    int b, c, h;
    cin >> b >> c >> h;

    // jodi ham beshi ?

    b > c + h ? cout << ((c + h) * 2) + 1 << endl : cout << (b * 2) - 1 << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}