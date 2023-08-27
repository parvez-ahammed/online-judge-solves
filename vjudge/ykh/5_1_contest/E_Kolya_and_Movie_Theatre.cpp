#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> v(n);

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    ll sum = 0, ans = 0, cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            sum += v[i];
            pq.push(v[i]);
            if (pq.size() > m) {
                sum -= pq.top();
                pq.pop();
            }
        }
        ans = max(ans, sum - (i + 1) * d);
    }
    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}