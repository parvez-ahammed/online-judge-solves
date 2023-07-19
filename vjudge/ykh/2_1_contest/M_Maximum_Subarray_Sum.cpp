#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> v(n);

    rep(0, n) cin >> v[i];

    ll ans = LLONG_MIN, curr = 0;

    for (long long c : v)
    {
        curr = max(curr + c, c);
        ans = max(curr, ans);
    }

    cout << ans << endl;
    return 0;
}