#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

void solve()
{

    int n;
    ll sum1 = 0, sum2 = 0;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
        cin >> x, x >= 0 ? sum1 += x : sum2 += x;

    cout << max (abs(sum1)-abs(sum2)  , abs(sum2) - abs(sum1)) << endl;
}
int32_t main()
{

    FAST;
    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    return 0;
}