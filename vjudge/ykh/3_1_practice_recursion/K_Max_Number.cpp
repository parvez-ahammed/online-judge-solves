#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll getMax(vector<ll> v, ll n)
{

    if (n == v.size() - 1)
        return v[n];
    return max(v[n], getMax(v, n + 1));
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> v(n, 0);
    rep(0, n) cin >> v[i];

    cout << getMax(v, 0) << endl;
    return 0;
}