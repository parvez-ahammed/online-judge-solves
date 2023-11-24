#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, q;
    cin >> n >> q;

    vector<ll> a(n), x(q);

    map<ll, set<int>> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        for (int j = 1; j <= 30; j++) {
            if (a[i] % (1 << j) == 0) {
                mp[j].insert(i);
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < q; i++) {

        set<int> v = mp[x[i]];

        int sz = v.size();

        for (auto indice : v) {

            if (a[indice] % (1 << x[i]) == 0) {
                a[indice] += (1 << (x[i] - 1));
            }
        }

        mp[x[i]].clear();
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
