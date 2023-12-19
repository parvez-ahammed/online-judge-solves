#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int limit = min(k, n);
    vector<int> prefix(limit + 1, 0);

    for (int i = 1; i <= limit; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    vector<ll> ans;

    priority_queue<int> pq;

    for (int i = 1; i <= limit; i++) {
        pq.push(b[i]);
        ll jodiEkhaneThami = prefix[i];
        int kThakbe = k - i;
        jodiEkhaneThami += (pq.top() * kThakbe);
        ans.push_back(jodiEkhaneThami);
    }

    sort(ans.rbegin(), ans.rend());

    cout << ans.front() << endl;
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