#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int mod = 998244353;

void solve()
{
    int n;
    cin >> n;

    int curr = 1;

    for (int i = 1; i <= n; i++)
        curr = 1LL * curr * i % mod;

    cout << curr << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}