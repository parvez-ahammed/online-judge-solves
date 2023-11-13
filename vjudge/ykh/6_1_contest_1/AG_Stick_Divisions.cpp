#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{

    int x, n;
    cin >> x >> n;
    int temp;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= n; i++) {
        cin >> temp;
        pq.push(temp);
    }

    ll ans = 0;
    while (pq.size() >= 2)
    {
        int part1 = pq.top();
        pq.pop();
        int part2 = pq.top();
        pq.pop();
        int wholePart = part1 + part2;
        ans += wholePart;
        pq.push(wholePart);
    }

    cout << ans << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}