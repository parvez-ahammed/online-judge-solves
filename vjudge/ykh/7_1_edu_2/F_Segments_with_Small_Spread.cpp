#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct DS {

    multiset<ll> ms;

    void insert(ll x)
    {
        ms.insert(x);
    }

    void erase(ll x)
    {
        ms.erase(ms.find(x));
    }

    ll getDiff()
    {
        return *ms.rbegin() - *ms.begin();
    }

    void print()
    {
        for (auto x : ms) {
            cout << x << " ";
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

            if (ds.getDiff() > k) {
                ds.erase(v[r]);
                break;
            }

            r++;
        }

        cnt += r - i;

        //ds.print();

        ds.erase(v[i]);
        
    }

    cout << cnt << endl;

    return 0;
}