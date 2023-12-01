#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pow2(x) (1ll << (x))
#define checkBit(n, b) (n & (1ll << b))

ll maxVal(ll val, ll ans, ll k)
{
    ll onKorleValueHobe = (val / pow2(k)) * pow2(k) + pow2(k);
    onKorleValueHobe += ans ^ (onKorleValueHobe & ans);
    return onKorleValueHobe;
}

ll processQuery(vector<ll> a, ll moves)
{
    int n = a.size();

    ll ans = 0;
    for (ll k = 60; k >= 0; --k) {

        ll eiBitOnKorteMoveLagbe = 0;

        for (ll j = 0; j < n; ++j) {
            if (!checkBit(a[j], k)) {

                ll onKorleValueHobe = maxVal(a[j], ans, k);
                eiBitOnKorteMoveLagbe += onKorleValueHobe - a[j];

                if (eiBitOnKorteMoveLagbe > moves) {
                    break;
                }
            }
        }

        if (eiBitOnKorteMoveLagbe <= moves) {
            for (ll j = 0; j < n; ++j) {
                if (!checkBit(a[j], k)) {
                    a[j] = maxVal(a[j], ans, k);
                }
            }

            ans += pow2(k);
            moves -= eiBitOnKorteMoveLagbe;
        }
    }
    return ans;
}

void solve()
{

    int n, q;

    cin >> n >> q;

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (q--) {
        ll k;
        cin >> k;

        cout << processQuery(a, k) << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
}
