#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

ll sumInRange(vector<ll> v, int l, int r)
{
    --l, --r;
    if (l > r)
        swap(l, r);
    ll sum = 0;
    l == 0 ? sum = v[r] : sum = v[r] - v[l - 1];
    return sum;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, type, l, r;

    cin >> n;
    int v[n];
    vector<ll> pref(n), prefD(n);

    cin >> v[0];
    pref[0] = v[0];

    rep(1, n)
    {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }

    sort(v,v+n);
    prefD[0] = v[0];
    rep(1, n) prefD[i] = prefD[i - 1] + v[i];

    
    cin >> q;
    while (q--)
    {
        cin >> type >> l >> r;

        if (type == 1)
            cout << sumInRange(pref, l, r) << endl;
        else
            cout << sumInRange(prefD, l, r) << endl;
    }

    return 0;
}
