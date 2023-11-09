#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void allPossibleSubset(vector<ll>& v, ll x)
{
    int n = v.size();
    int count = pow(2, n);

    ll mn = v[n - 1];

    ll res = 0;
    for (int i = 1; i < count; i++) {

        bool minAbsent = true;

        ll tempX = x;

        for (int j = 0; j < n; j++) {

            if ((i & (1 << j))) {

                tempX %= v[j];
                if (v[j] == mn)
                    minAbsent = false;
            }
        }

        if (minAbsent)
            tempX %= mn;

        res = max(res, tempX);
    }

    cout << res << endl;
}

void solve()
{

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll x;
    cin >> x;

    sort(v.rbegin(), v.rend());

    allPossibleSubset(v, x);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}