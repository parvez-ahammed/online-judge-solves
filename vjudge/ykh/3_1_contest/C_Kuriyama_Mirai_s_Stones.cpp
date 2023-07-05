#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)


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

    prefD.insert(prefD.begin(), 0);
    pref.insert(pref.begin(), 0);

    
    cin >> q;
    while (q--)
    {
        cin >> type >> l >> r;

        if (type == 1)
            cout <<  pref[r] - pref[l - 1] << endl;
        else
            cout <<  prefD[r] - prefD[l - 1] << endl;
    }

    return 0;
}
