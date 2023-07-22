#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define mid(l, r) (l + (r - l) / 2)
#define vi vector<int>

#define rep(start, x) for (int i = start; i < x; i++)

void solve()
{

    ll n, c;
    cin >> n >> c;
    vi v(n);
    ll B = 0, A = 0;
    rep(0, n) cin >> v[i];

    ll l = 0, r = 1e9;
    ll ans = 0, sum = 0, w;

    while (l <= r)
    {
        w = mid(l, r);
        sum = 0;

        rep(0, n)
        {
            ll sq = (v[i] + w + w) * (v[i] + w + w);
            sum += sq;
            if (sum > c)
                break;
        }

        if (sum == c)
        {
            cout << w << endl;
            return;
        }
        if (sum > c)
            r = w - 1;
        else
            l = w + 1;
    }
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