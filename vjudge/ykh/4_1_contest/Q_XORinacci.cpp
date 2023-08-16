#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    n++;
    int ans = 0;

    if (n % 3 == 1)
        ans = a;
    if (n % 3 == 2)
        ans = b;
    if (n % 3 == 0)
        ans = a ^ b;

    cout << ans << endl;
}
int32_t main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}