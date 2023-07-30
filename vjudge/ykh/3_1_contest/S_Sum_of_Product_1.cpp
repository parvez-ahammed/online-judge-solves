#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll findSum(ll n)
{
    return ((n) * (n + 1)) / 2;
}

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;

    int a;

    ll l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;

        if (a == 1)
        {
            if (l == 0)
                l = i;
        }

        else
        {
            r = i;

            ll diff = r - l;

            if (l != 0)
                cnt += findSum(diff);

            l = 0;
        }
    }

    if (l != 0)
        cnt += findSum((n + 1) - l);
    cout << cnt << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}