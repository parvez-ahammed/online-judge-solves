#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    int n;
    cin >> n;

    priority_queue<pair<ll, int>> pq;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        pq.push({ x, i });
    }

    int q;
    cin >> q;

    while (q--) {
        ll mod;

        cin >> mod;

        while (pq.top().first >= mod) {
            auto p = pq.top();
            pq.pop();
            pq.push({ p.first % mod, p.second });
        }
    }

    vector<ll> ans(n);

    while (!pq.empty()) {
        auto p = pq.top();
        pq.pop();

        ans[p.second] = p.first;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i < n - 1 ? " " : "");
    }
    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ":" << endl;
        solve();
    }
    return 0;
}