#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll findSum(int n)
{
    return ((n * 1LL) * (n + 1)) / 2;
}

void solve()
{
    int n;
    cin >> n;

    ll cnt = 0;

    int a;

    int l = 0, r = 0;
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

            if (l != 0)
                cnt += findSum(r - l);

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