#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int a_time = a;
    int b_time = (b < c ? (c + (abs(b - c))) : b);
    int ans = 3;
    if (a_time < b_time)
        ans = 1;
    if (a_time > b_time)
        ans = 2;
    cout << ans << endl;
}
int32_t main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}