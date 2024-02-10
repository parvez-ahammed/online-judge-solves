#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{

    ll n;
    cin >> n;

    priority_queue<ll> s;
    map<ll, ll> mp;
    s.push(n);
    mp[n] = 1;

    ll cost = 0;

    while (!s.empty()) {
        ll curr = s.top();
        ll occ = mp[curr];
        s.pop();
        mp.erase(curr);

        if (curr < 2) {
            continue;
        }

        cost += (1ll * occ * curr);

        ll down = curr / 2;
        ll up = (curr + 1) / 2;

        if (mp[up] == 0) {
            s.push(up);
        }
        if (mp[down] == 0) {
            s.push(down);
        }

        mp[up] += occ;
        mp[down] += occ;
    }
    cout << cost << endl;
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