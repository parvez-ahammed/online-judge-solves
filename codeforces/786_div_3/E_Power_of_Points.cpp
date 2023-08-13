#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

ll sum(ll l, ll r)
{
    --l;
    ll sLeft = (l * (l + 1)) / 2;
    ll sRight = (r * (r + 1)) / 2;

    return sRight - sLeft;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        ll val = 1;

        for (int j = 0; j < n; j++)
        {

            int l = min(v[i], v[j]);
            int r = max(v[i], v[j]) ;

            cout << l << " " << r << endl;
        }
        cout << val << " " << endl;
    }

    cout << endl;
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