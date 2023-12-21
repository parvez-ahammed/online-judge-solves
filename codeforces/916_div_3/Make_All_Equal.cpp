#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll doPartialIncrease(map<int, int>& partial, int mx, int m)
{

    ll cnt = 0;

    ll spareMoves = 0;
    for (auto [val, occ] : partial) {

        if (spareMoves) {

            int diff = mx - val;

            if (spareMoves >= diff) {

                int maxBanaiteParbo = spareMoves / diff;
                int canTake = min(maxBanaiteParbo, occ);
                occ -= canTake;
                spareMoves -= (1ll * canTake * diff);



            } else {
                occ -= 1;
                partial[val + spareMoves] += 1;
                spareMoves = 0;
            }
        }

        if (occ == 0)
            continue;

        int diff = mx - val;
        cnt += diff;

        spareMoves += (1ll * diff  * (m - occ));
    }

    return cnt;
}
void solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> v(n + 1);

    map<int, int> mp;

    int mx = 0;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mx, v[i]);
    }

    if (mp.size() == 1) {
        cout << 0 << endl;
        return;
    }

    ll cnt = 0;

    map<int, int> partial;

    for (auto [val, occ] : mp) {
        if (val != mx) {

            if (occ < m) {
                partial[val] = occ;
                continue;
            }
            int noBarano = occ % m;

            if (noBarano > 0)
                partial[val] = noBarano;

            int yesBarano = occ - noBarano;

            int koytaBatch = yesBarano / m;

            int diff = mx - val;

            cnt += (1ll * koytaBatch * diff);
        }
    }

    ll partIncrease = 0;
    partIncrease += doPartialIncrease(partial, mx, m);

    cout << cnt + partIncrease << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}