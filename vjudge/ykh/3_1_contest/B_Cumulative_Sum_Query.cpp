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
    vector<int> v(n);
    vector<ll> suff(n);
    rep(0, n) cin >> v[i];

    suff[0] = v[0];
    rep(1, n) suff[i] = suff[i - 1] + v[i];

    int q;
    cin >> q;

    rep(0, q)
    {
        int l, r;
        cin >> l >> r;

        if (l > r)
            swap(l, r);

        if (l == 0)
            cout << suff[r] << endl;
        else
            cout << suff[r] - suff[l-1] << endl;
    }
    return 0;
}