#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct DS {

    map<int, int> mp;

    void insert(ll x)
    {
        mp[x]++;
    }

    void erase(ll x)
    {
        mp[x]--;
        if (mp[x] == 0) {
            mp.erase(x);
        }
    }

    int unique()
    {
        return mp.size();
    }

    void print()
    {
        for (auto x : mp) {
            cout << x.first << " " << x.second << endl;
        }
        cout << endl;
    }

} ds;
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    vector<ll> v(n + 1, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int r = 1;

    ll cnt = 0;

    for (int i = 1; i <= n; i++) {

        while (r <= n) {

            ds.insert(v[r]);

            if (ds.unique() > k) {
                ds.erase(v[r]);
                break;
            }

            r++;
        }

       // cout << i << " " << r << " " << r - i << endl;

        if (r - i >= 0)
            cnt += r - i;

        ds.erase(v[i]);
    }

    cout << cnt << endl;

    return 0;
}