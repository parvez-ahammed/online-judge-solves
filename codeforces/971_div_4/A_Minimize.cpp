#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int a, b, c;
    cin >> a >> b;

    int min = -1;

    for (int c = a; c <= b; c++) {
        min = (c - a) + (b - c);
    }

    cout << min << endl;
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