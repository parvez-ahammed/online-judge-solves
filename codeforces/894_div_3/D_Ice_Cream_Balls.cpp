#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int n;

bool check(int x)
{
    int pos = (x * (x - 1)) / 2;
    return pos <= n;
}

int binsearch(int lo, int hi)
{
    while (lo < hi)
    {
        int mid = (lo + hi + 1) / 2;
        if (check(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return lo;
}

void solve()
{
    cin >> n;
    int x = binsearch(1, 4e9);
    int ans = x + (n - x * (x - 1) / 2);
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
